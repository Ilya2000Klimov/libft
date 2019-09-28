/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 23:12:35 by aikhatam          #+#    #+#             */
/*   Updated: 2019/09/28 02:46:08 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*n;

	i = 0;
	n = ft_strnew(ft_strlen(s));
	while (*s)
	{
		n[i] = f(i, *s++);
		i++;
	}
	return (n);
}
