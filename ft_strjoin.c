/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 00:42:22 by aikhatam          #+#    #+#             */
/*   Updated: 2019/09/28 02:40:53 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const*s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if(!(str = malloc((i + j + 1) * (char))))
		return (NULL);
	str = strncpy(str, s1, i);
	return (strncat(str, s2, (i + j + 1)));
}