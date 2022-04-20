/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:49:55 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/20 09:52:24 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	if (!dst || !src)
		return (0);
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize && dstlen < dstsize - 1)
	{
		i = 0;
		while (src[i] && i < dstsize - dstlen - 1)
		{
			dst[i + dstlen] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	if (dstlen >= dstsize)
		dstlen = dstsize;
	return (dstlen + srclen);
}

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
