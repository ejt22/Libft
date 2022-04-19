/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:38:16 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/07 17:03:07 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (NULL);
	if (needle[0] == 0)
		return (((char *)haystack));
	i = 0;
	j = 0;
	if (len > 0)
	{
		while (haystack[i] && i < len)
		{
			while (haystack[i + j] == needle[j] && needle[j] && (i + j) < len)
				j++;
			if (needle[j] == '\0')
				return (((char *)haystack) + i);
			j = 0;
			i++;
		}
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main ()
{
	const char h[] = "Hello";
	const char n[] = "Hello";
	printf("%s\n", strnstr(h, n, 0));
	printf("%s\n", ft_strnstr(h, n, 0));
	return (0);
}
*/