/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 12:14:06 by apeinado          #+#    #+#             */
/*   Updated: 2022/04/27 09:28:22 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (dst == src || !size)
		return (dst);
	while (i < size)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}
