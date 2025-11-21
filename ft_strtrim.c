/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:09:05 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/08 08:02:26 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	size_t	i;

	if (s1[0] == '\0')
		return (-1);
	i = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			return (i);
		i++;
	}
	return (-1);
}

static int	ft_end(char const *s1, char const *set)
{
	size_t	i;

	if (s1[0] == '\0')
		return (-1);
	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		if (!ft_strchr(set, s1[i]))
			return (i);
		i--;
	}
	if (!ft_strchr(set, s1[0]))
		return (0);
	return (-1);
}

static void	ft_fill(char const *s1, char *ptr, int start, int end)
{
	int	j;

	j = 0;
	while (start + j <= end)
	{
		ptr[j] = s1[start + j];
		j++;
	}
	ptr[j] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start == -1 || end == -1 || start > end)
		return (ft_strdup(""));
	ptr = malloc((end - start + 2));
	if (!ptr)
		return (NULL);
	ft_fill(s1, ptr, start, end);
	return (ptr);
}
