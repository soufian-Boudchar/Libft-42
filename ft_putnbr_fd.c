/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 06:29:22 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/08 15:10:57 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_nbr(int n, int fd)
{
	char	arr[10];
	int		i;

	i = 0;
	while (n > 0)
	{
		arr[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
	{
		i--;
		ft_putchar_fd(arr[i], fd);
	}
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	print_nbr(n, fd);
}
