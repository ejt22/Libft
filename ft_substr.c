/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:35:30 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/07 15:51:47 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	ptr = malloc (sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = ((size_t)start);
	j = 0;
	while (s[i] && j < len)
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/*
#include <stdio.h>

int	main()
{
	char s[] = "Hello Charlie!";
	unsigned int start = 0;
	size_t	len = 6;

	printf("%s\n", ft_substr(s, start, len));
	return (0);
}
*/