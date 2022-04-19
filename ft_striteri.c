/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:53:36 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/11 13:07:26 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void ft_f(unsigned int i, char *c)
{
	if ((*c >= 'A' && *c <= 'Y') || (*c >= 'a' && *c <= 'y'))
		*c += 1;
	if (*c == 'Z' || *c == 'z')
		*c += ('A' - 'Z');
}

#include <stdio.h>

int	main (void)
{
	char	s[] = "Hello charlie";

	ft_striteri(s, &ft_f);
	printf("%s\n", s);
	return (0);
}
*/