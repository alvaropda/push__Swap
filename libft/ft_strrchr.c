/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:38:21 by apeinado          #+#    #+#             */
/*   Updated: 2022/05/03 10:31:02 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <string.h> */
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str) + 1;
	while (i--)
	{
		if (*(str + i) == (unsigned char)c)
			return ((char *)(str + i));
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%s", ft_strrchr("holahijodeputa", 'o'));
}
 */