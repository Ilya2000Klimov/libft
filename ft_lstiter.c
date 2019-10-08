/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 21:43:23 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/02 20:43:57 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    if ((*lst).next)
        ft_lstiter((*lst).next, f);
	f((*lst).content);
	free(lst);
	lst = NULL;
}
