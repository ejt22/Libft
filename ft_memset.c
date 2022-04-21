/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:03:30 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/21 14:35:33 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return ((void *)b);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *s1 = NULL;
	char *s2 = NULL;

	printf("original s = %s\n", s1);
	printf("return of memset = %s\n", ft_memset(s1, 34, 3));
	memset(s2, 34, 3);
	printf("modified s1 = %s\n", s1);
}
*/