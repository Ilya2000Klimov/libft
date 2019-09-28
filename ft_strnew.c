/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 08:45:14 by iklimov           #+#    #+#             */
/*   Updated: 2019/09/27 22:08:23 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char	*s;

	if (!(s = ft_memalloc((n + 1) * sizeof(char))))
		return (NULL);
	ft_bzero(s, n);
	return (s);
}