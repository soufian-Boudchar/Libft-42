/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:41:17 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/03 16:36:18 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			nb++;
		i++;
	}
	return (nb);
}

static int	ft_skip(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] == c && str[i])
		i++;
	return (i);
}

static int	ft_words(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

static char	**ft_free(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		full_len;
	char	**ptr;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	full_len = ft_count(s, c);
	ptr = malloc((full_len + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < full_len)
	{
		j = j + ft_skip(&s[j], c);
		ptr[i] = ft_substr(s, j, ft_words(&s[j], c));
		if (!ptr[i])
			return (ft_free(ptr));
		j = j + ft_words(&s[j], c);
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
