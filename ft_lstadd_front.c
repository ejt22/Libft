/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:25:18 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2022/04/22 12:22:22 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	iif (!lst | !(*lst) | !new)
		return ;
	new->next = *lst;
	*lst = new;
}