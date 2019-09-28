/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 01:21:20 by aikhatam          #+#    #+#             */
/*   Updated: 2019/09/28 02:44:31 by aikhatam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*trim;

	if (*s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	i = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	if(!(*trim = malloc((i + 2)*(char))))
		return (NULL);
	return (strncpy(trim, s, (i + 2)));
}
