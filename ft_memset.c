/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:17:28 by sboudcha          #+#    #+#             */
/*   Updated: 2025/10/21 16:06:32 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	al;

	i = 0;
	ptr = (unsigned char *)s;
	al = (unsigned char)c;
	while (i < n)
	{
		ptr[i] = al;
		i++;
	}
	return (s);
}
