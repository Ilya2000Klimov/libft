/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsqrt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:00:38 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/09 21:18:41 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intsqrt(int nb)
{
	int root;

	root = 1;
	while (root * root < nb)
		root++;
	if (root * root == nb)
		return (root);
	return (0);
}
