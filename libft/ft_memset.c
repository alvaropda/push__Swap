/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:22:04 by apeinado          #+#    #+#             */
/*   Updated: 2022/04/27 10:15:27 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *str, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		*((unsigned char *)str + i) = c;
		i++;
	}
	return (str);
}
/* #include <stdio.h>
int	main(void)
{
	size_t	dst[50];

	dst[50] = "alol";
	printf("%s", ft_memset(dst, 'c', 3));
}
 */