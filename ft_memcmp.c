/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 02:06:38 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/08 17:25:50 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
		if (!(*(unsigned char *)s1++ == *(unsigned char *)s2++))
			return (*((unsigned char *)--s1) - *((unsigned char *)--s2));
	return (0);
}

// int		ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	unsigned char *str1;
// 	unsigned char *str2;

// 	str1 = (unsigned char *)s1;
// 	str2 = (unsigned char *)s2;
// 	while (*str1 == *str2 && n-- > 1)
// 	{
// 		str1++;
// 		str2++;
// 	}
// 	return (*str1 - *str2);
// }

