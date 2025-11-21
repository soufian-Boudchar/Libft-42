/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:13:43 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/10 17:49:15 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcat(ptr, s1, s1_len + s2_len + 1);
	ft_strlcat(ptr, s2, s2_len + s1_len + 1);
	return (ptr);
}
