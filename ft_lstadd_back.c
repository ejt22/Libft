/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 12:09:17 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2022/04/22 12:21:16 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst | !(*lst) | !new)
		return ;
	ptr = ft_lstlast(*lst);
	ptr->next = new;
}
