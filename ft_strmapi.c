/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:29:07 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/11 12:49:52 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char ft_f(unsigned int i, char c)
{
	if ((c >= 'A' && c <= 'Y') || (c >= 'a' && c <= 'y'))
		return (c + 1);
	else if (c == 'Z' || c == 'z')
		return (c + ('A' - 'Z'));
	else
		return (c);
}

#include <stdio.h>

int	main (void)
{
	char	s[] = "Hello charlie";

	printf("%s\n", ft_strmapi(s, &ft_f));
	return (0);
}
*/
