/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:42:35 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/07 17:03:29 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s && *s != ((char)c))
		s++;
	if (*s == ((char)c))
		return (((char *)s));
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	char	s[] = "Hellocharlie";
	int		c = 'e';

	printf("%s\n", ft_strchr(s, c));
	return (0);
}
*/
