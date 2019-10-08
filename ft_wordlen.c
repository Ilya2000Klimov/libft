/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 15:40:15 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/02 15:40:23 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordlen(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (s[size] && s[size] != c)
		++size;
	return (size);
}
