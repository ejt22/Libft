/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:14:47 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/06 12:55:53 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = len - 1;
	while (i > 0 && s[i] != ((char)c))
		i--;
	if (s[i] == ((char)c))
		return (((char *)s) + i);
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	char	s[] = "Hellocharlie";
	int		c = 'e';

	printf("%s\n", ft_strrchr(s, c));
	return (0);
}
*/
