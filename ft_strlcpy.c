/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:56:31 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/21 15:59:00 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	if (dstsize)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	srcsize = ft_strlen(src);
	return (srcsize);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char dst1[12]="automobiles";
	char dst2[12]="automobiles";
	char src[] = "Hello";
	size_t  n1;
	size_t  n2;

	n1 = ft_strlcpy(dst1, src, 12);
	n2 = strlcpy(dst2, src, 12);
	printf("%s %zu\n", dst1, n1);
	printf("%s %zu\n", dst2, n2);
	return (0);
}
*/