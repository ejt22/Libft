/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:04:56 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/26 15:42:40 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_itoazero(int n)
{
	char	*str;

	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	return (NULL);
}

static long long	ft_absn(int n)
{
	long long	nbr;

	nbr = 0;
	if (n >= 0)
		nbr = n;
	else if (n < 0)
		nbr = (long long)n * (-1);
	return (nbr);
}

char	*ft_itoa(int n)
{
	long long	nbr;
	int			len;
	char		*str;

	len = ft_nlen(n);
	if (n == 0)
		return (ft_itoazero(0));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	nbr = ft_absn(n);
	str[len--] = '\0';
	while (nbr)
	{
		str[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
