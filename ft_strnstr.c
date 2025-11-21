/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:07:34 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/04 16:11:25 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*to_big;

	i = 0;
	j = 0;
	to_big = (char *)big;
	if (!(*little))
		return (to_big);
	while (i < len && to_big[i] != '\0')
	{
		j = 0;
		while (little[j] == to_big[i + j] && (j + i) < len && to_big[i + j])
		{
			j++;
			if (little[j] == '\0')
				return (&to_big[i]);
		}
		i++;
	}
	return (NULL);
}
