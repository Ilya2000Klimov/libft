/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 15:31:41 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/02 16:20:56 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = (ft_intlength(n));
	if (!(str = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	if (n < 0)
		*str = '-';
	str[size + 1] = '\0';
	while (n > 0)
	{
		str[size--] = n % 10;
		n = n / 10;
	}
	return (str);
}
