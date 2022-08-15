/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:41:47 by apeinado          #+#    #+#             */
/*   Updated: 2022/04/26 12:58:24 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t	position;

	position = ft_strlen((char *)s2);
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 && size-- >= position)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, position) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
/* #include <stdio.h>

int	main(void)
{
	char *s1 = "hola paco que tal";
	char *s2 = "paco";
	printf("%s", ft_strnstr(s1, s2, 100));
} */