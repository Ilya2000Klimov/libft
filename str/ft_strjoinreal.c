/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinreal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 22:57:37 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/22 17:10:39 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strrealjoin: like ft_strjoin but instead of allocate a new char
**				   it reallocate s1
*/

#include "libft.h"

char	*ft_strjoinreal(char *s1, const char *s2)
{
	char	*ret;

	ret = NULL;
	if ((s1 != NULL) && (s2 != NULL))
	{
		ret = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (ret != NULL)
		{
			ft_strcpy(ret, s1);
			ft_strcpy((ret + ft_strlen(s1)), s2);
			free(s1);
		}
	}
	return (ret);
}
