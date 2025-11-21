/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:47:51 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/08 15:50:28 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_to_dest;
	unsigned char	*ptr_to_src;
	size_t			i;

	ptr_to_dest = (unsigned char *)dest;
	ptr_to_src = (unsigned char *)src;
	i = 0;
	if (ptr_to_src > ptr_to_dest)
	{
		while (i < n)
		{
			ptr_to_dest[i] = ptr_to_src[i];
			i++;
		}
	}
	else if (ptr_to_dest > ptr_to_src)
	{
		while (n > 0)
		{
			n--;
			ptr_to_dest[n] = ptr_to_src[n];
		}
	}
	return (dest);
}
