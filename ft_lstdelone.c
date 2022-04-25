/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 12:23:30 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2022/04/22 13:47:43 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
