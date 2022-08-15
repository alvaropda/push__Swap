/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:31:18 by apeinado          #+#    #+#             */
/*   Updated: 2022/04/27 09:07:03 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cnt;
	size_t	i;

	cnt = 0;
	i = 0;
	while (src[cnt])
		cnt++;
	while (src[i] && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size)
		dst[i] = '\0';
	return (cnt);
}
/* #include <stdio.h>
int	main(void)
{
	char dst[50] = "hola";
	char src[50] = "paco";
	printf("%zu", ft_strlcpy(dst, src, 3));
} */