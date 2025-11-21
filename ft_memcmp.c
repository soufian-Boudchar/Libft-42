/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:34:04 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/08 15:50:23 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*to_s1;
	unsigned char	*to_s2;
	size_t			i;

	to_s1 = (unsigned char *)s1;
	to_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (to_s1[i] != to_s2[i])
			return (to_s1[i] - to_s2[i]);
		i++;
	}
	return (0);
}
