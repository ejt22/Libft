/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:49:55 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/21 11:09:38 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!dst || !src)
		return (0);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	while (src[i] && j < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50] = "String1";
    char s2[50] = "String2";
    size_t dest;
    size_t dest2;
    dest = ft_strlcat(s1, s2, 15);
    dest2 = strlcat(s1, s2, 15);
    printf("Final string : %s\n", s1);
    printf("dest after ft_strlcat : %zu\n", dest);
    printf("dest after strlcat : %zu\n", dest2);
    return (0);
}
*/
