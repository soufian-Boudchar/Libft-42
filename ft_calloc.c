/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 00:47:10 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/06 15:44:45 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (ft_strdup(""));
	if (nmemb > SIZE_MAX / size)
		return (0);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (0);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
