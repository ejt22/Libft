/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:38:16 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/26 13:53:22 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

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
