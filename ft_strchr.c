/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:48:22 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/03 17:14:47 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	_c;

	ptr = (char *)s;
	_c = (char)c;
	while (*ptr != '\0')
	{
		if (*ptr == _c)
			return (ptr);
		ptr++;
	}
	if (_c == '\0')
		return (ptr);
	return (NULL);
}
