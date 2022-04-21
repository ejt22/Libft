/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:48:28 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/20 15:11:49 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (n > 0)
	{
		while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]
			&& (((unsigned char *)s1)[i] || ((unsigned char *)s2)[i])
			&& i < n)
			i++;
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	const char s1[] = "Hella";
	const char s2[] = "Hello";

	printf("%d\n", memcmp(s1, s2, 5));
	printf("%d\n", ft_memcmp(s1, s2, 5));
	return (0);
}
*/
