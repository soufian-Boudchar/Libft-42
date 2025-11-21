/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:20:03 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/03 16:52:27 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_fill(char *ptr, int n, int len)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		ptr[i++] = '-';
		n *= -1;
	}
	i = len - 1;
	while (n > 0)
	{
		ptr[i--] = (n % 10) + '0';
		n /= 10;
	}
	ptr[len] = '\0';
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;

	len = ft_count(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_fill(ptr, n, len);
	return (ptr);
}
