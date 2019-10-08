/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 15:38:33 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/07 20:45:14 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char const *s, char c)
{
	size_t i;

	i = 0;

	while (*s)
	{
		while (*s != c && *s)
			s++;
		if (*s == c && *s)
			i++;
		while (*s == c && *s)
			s++;
	}
	return i;
}
