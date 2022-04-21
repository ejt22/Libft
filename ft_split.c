/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:05:50 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/20 14:53:30 by ejoo-tho         ###   ########.fr       */
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
static int	ft_wdcount(char const *s, char c)
{
	static int	count;
	static int	trigger;

	if (!s)
		return (0);
	count = 0;
	trigger = -1;
	while (*s)
	{
		if (*s != c && trigger < 0)
		{
			trigger = 1;
			count++;
		}
		else if (*s == c)
			trigger = -1;
		s++;
	}
	return (count);
}

static char	*ft_strdupwd(char const *s, int start, int finish)
{
	char	*word;
	int		i;

	if (!s)
		return (0);
	word = malloc(sizeof(char) * (finish - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		start;

	str = malloc(sizeof(char *) * (ft_wdcount(s, c) + 1));
	if (!s || !str)
		return (NULL);
	i = -1;
	j = 0;
	start = -1;
	while (++i <= (int)ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && start >= 0)
		{
			str[j++] = ft_strdupwd(s, start, i);
			start = -1;
		}
	}
	str[j] = 0;
	return (str);
}
/*
#include <stdio.h>

void	ft_free(char **tab)
{
	int i = 0;

	while (tab[i] != 0)
	{
		free(tab[i]);
		i++;
		
	}
	free(tab);
}

int	main()
{
	char	s[] = " Hello Charlie how are you?";
	char	c = ' ';
	int		i = 0;


	char **tab = ft_split(s, c);

	while (i <= ft_wdcount(s, c))
	{
		printf("%s\n", ft_split(s, c)[i]);
		i++;
	}

	printf("%s\n", tab[0]);
	ft_free(tab);
	//system("leaks a.out");
	return (0);
}
*/
