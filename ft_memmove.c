/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:16:06 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/21 16:21:56 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
//#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	if (!dst && !src && len > 0)
		return (NULL);
	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return ((void *)dst);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char    src[] = "Hello";
    char    dst1[] = "automobile";
    char    dst2[] = "automobile";
    printf("%s\n", src);
    printf("%s\n", dst1);
    printf("%s\n", dst2);
    printf("%s\n", ft_memmove(dst1, src, 3));
    printf("%s\n", memmove(dst2, src, 3));
    return (0);
}
*/
