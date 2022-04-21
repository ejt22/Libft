/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:51:53 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/21 15:58:04 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

		i = 0;
	if (n > 0)
	{
		while ((s1[i] || s2[i]) && (s1[i] == s2[i]) && i < n - 1)
			i++;
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
	return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
	const char s1[] = "test\200";
	const char s2[] = "test\0";
	
	printf("%d\n", strncmp(s1,s2, 6));
	printf("%d\n", ft_strncmp(s1,s2, 6));
	return (0);
}
*/
