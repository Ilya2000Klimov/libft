/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 08:45:14 by iklimov           #+#    #+#             */
/*   Updated: 2019/09/26 08:46:11 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char	*s;

	s = ft_memalloc((n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	else
		s[n + 1] = '\0';
	return (s);
}