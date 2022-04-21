/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:12:15 by ejoo-tho          #+#    #+#             */
/*   Updated: 2022/04/21 13:52:47 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
*/
void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0 && n <= 9)
		ft_putchar_fd('0' + n, fd);
	else if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n > -2147483648 && n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

/*
int	main(void)
{
	ft_putnbr_fd(42, 1);
	return (0);
}
*/