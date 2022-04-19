/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:25:49 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/07 17:03:06 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (!s)
		return (NULL);
	while (*((unsigned char *)s) != ((unsigned char)c)
		&& *((unsigned char *)s) && n)
	{
		s++;
		n--;
	}
	if (*((unsigned char *)s) == ((unsigned char)c))
		return ((void *)s);
	return (NULL);
}
/*
#include <stdio.h>

int main ()
{
	char s[] = "hellocharlie";
	printf("%s\n", ft_memchr(s, 'r', 12));
	return (0);
}
*/