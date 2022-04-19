/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:16:06 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/05 11:55:23 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	if (!dst || !src)
		return (NULL);
	tmp = (unsigned char *)src;
	while (i < len)
	{
		((unsigned char *)dst)[i] = tmp[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>

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