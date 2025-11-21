/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:17:23 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/10 18:22:05 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// char ft_function(unsigned int is, char str)
// {
//    (void)is;
//    int i = 0;
//    if (str == 'a')
//    {
//       str -= 32;
//    }
//    return (str);
// }
// int main()
// {
//    printf("%s", ft_strmapi("aaa", ft_function));
// }
