/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:51:53 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/07 11:53:38 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	if (n > 0)
	{
		while ((s1[i] || s2[i]) && (s1[i] == s2[i]) && i < n - 1)
			i++;
		return (s1[i] - s2[i]);
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
int main()
{
	const char s1[] = "abc";
	const char s2[] = "Abc";
	
	printf("%d\n", strncmp(s1,s2, 3));
	//printf("%d\n", ft_strncmp("abc","Abc", 5));
	return (0);
}
