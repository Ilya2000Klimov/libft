/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 00:00:32 by aikhatam          #+#    #+#             */
/*   Updated: 2019/09/28 00:21:17 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned intstart, size_t len)
{
	char	*sub;
	size_t		i;

	if (!sub = malloc((len + 1) * (char)) || !*s || !len)
		return NULL;
	i = -1;
	while (len-- && *s && (i || !i++))
		*(sub + i) = *(s + intstart + i);
	return sub;
}