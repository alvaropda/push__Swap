/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:34:38 by apeinado          #+#    #+#             */
/*   Updated: 2022/04/26 14:05:46 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i))
			i++;
		else
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	}
	return (0);
}

/* int	main(void)
{
	char dst[50] = "bb";
	char src[50] = "aa";
	printf("%d", ft_memcmp(dst, src, 1));
} */