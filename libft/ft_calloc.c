/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:38:41 by apeinado          #+#    #+#             */
/*   Updated: 2022/05/03 11:24:52 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cnt, size_t size)
{
	void	*buffer;

	if (size == SIZE_MAX)
		return (NULL);
	buffer = (void *)malloc(size * cnt);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size * cnt);
	return (buffer);
}
