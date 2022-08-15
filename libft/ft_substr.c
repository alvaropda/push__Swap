/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:42:10 by apeinado          #+#    #+#             */
/*   Updated: 2022/05/06 10:19:37 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*modified_s;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen((char *)s) < start)
		len = 0;
	if (ft_strlen((char *)s + start) < len)
		len = (ft_strlen(s + start));
	modified_s = malloc(sizeof(char) * (len + 1));
	if (!modified_s)
		return (NULL);
	while (start < ft_strlen((char *)s) && s[start + i] && i < len)
	{
		modified_s[i] = s[start + i];
		i++;
	}
	modified_s[i] = '\0';
	return (modified_s);
}
/* int	main(void)
{
	char	*str;

	str = ft_substr("Hello, 42Seoul!", 7, 4);
	printf("%s\n", str);
	return (0);
} */
