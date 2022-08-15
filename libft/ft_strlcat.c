/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:09:58 by apeinado          #+#    #+#             */
/*   Updated: 2022/05/06 10:58:14 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	value;
	size_t	src_i;

	src_i = 0;
	i = 0;
	if (size == 0 || size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	else
		value = ft_strlen(dst) + ft_strlen(src);
	while (dst[i])
		i++;
	while (src[src_i] && i + 1 < size)
	{
		dst[i] = src[src_i];
		i++;
		src_i++;
	}
	dst[i] = 0;
	return (value);
}
