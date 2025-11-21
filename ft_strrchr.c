/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:50:09 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/08 07:34:43 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	c_c;
	size_t	i;

	ptr = (char *)s;
	c_c = (char)c;
	i = ft_strlen(ptr);
	while (i > 0)
	{
		if (ptr[i] == c_c)
			return (&ptr[i]);
		i--;
	}
	if (ptr[i] == c_c)
		return (&ptr[i]);
	return (0);
}
