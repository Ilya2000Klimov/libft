/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 21:36:39 by aikhatam          #+#    #+#             */
/*   Updated: 2019/09/27 23:44:15 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*n;

	i = 0;
	n = ft_strnew(ft_strlen(s));
	while (*s)
		n[i++] = f(*s++);
	return (n);
}
