/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:35:30 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/26 15:07:35 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	n;

	if (!s)
		return (NULL);
	if (len >= ft_strlen(s))
		n = ft_strlen(s);
	else
		n = len;
	ptr = malloc (sizeof(char) * (n + 1));
	if (!ptr)
		return (NULL);
	i = ((size_t)start);
	j = 0;
	while (i < ft_strlen(s) && j < len)
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
