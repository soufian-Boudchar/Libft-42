/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:24:36 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/08 14:29:57 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = start;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = (ft_strlen(s) - start);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (j < (start + len) && s[j])
		ptr[i++] = s[j++];
	ptr[i] = '\0';
	return (ptr);
}
