/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:00:28 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/26 14:59:14 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	protected_atoi(unsigned long long res, int sign, int size)
{
	unsigned long long	max;

	max = 9223372036854775807U;
	if (((res > max) || size > 19) && sign > 0)
		return (-1);
	else if (((res > (max + 1)) || size > 19) && sign < 0)
		return (0);
	return (res * sign);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	int					size;
	unsigned long long	res;

	i = 0;
	sign = 1;
	res = 0;
	size = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && ++size)
		res = res * 10 + (str[i++] - '0');
	return (protected_atoi(res, sign, size));
}
