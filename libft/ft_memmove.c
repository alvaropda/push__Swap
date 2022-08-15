/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:43:15 by apeinado          #+#    #+#             */
/*   Updated: 2022/04/27 11:30:22 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t	i;
	char	*p;
	char	*d;

	i = 0;
	p = (char *)dst;
	d = (char *)src;
	if (p == NULL && d == NULL)
		return (NULL);
	if (p > d)
	{
		while (size-- > 0)
			p[size] = d[size];
	}
	else
	{
		while (i < size)
		{
			p[i] = d[i];
			i++;
		}
	}
	return (dst);
}

/* int	main(void)
{
	char dst[50] = "hola";
	char src[50] = "paco";
	printf("%s", memmove(dst, src, 3));
} */