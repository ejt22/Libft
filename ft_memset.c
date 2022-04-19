/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:03:30 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/05 14:40:22 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (!b)
		return (NULL);
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[11] = "automobile";
	char s2[11] = "automobile";

	printf("original s = %s\n", s1);
	printf("return of memset = %s\n", ft_memset(s1, 34, 3));
	memset(s2, 34, 3);
	printf("modified s1 = %s\n", s1);
}
*/