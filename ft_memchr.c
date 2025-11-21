/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:25:41 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/08 15:50:19 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*to_s;
	unsigned char	to_c;
	size_t			i;

	to_s = (unsigned char *)s;
	to_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (to_s[i] == to_c)
		{
			return (&to_s[i]);
		}
		i++;
	}
	return (NULL);
}
