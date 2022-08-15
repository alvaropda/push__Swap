/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:06:50 by apeinado          #+#    #+#             */
/*   Updated: 2022/04/26 11:44:24 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int pos)
{
	if (pos >= '0' && pos <= '9')
		return (1);
	return (0);
}
/* #include <stdio.h>
int	main(void)
{
	int a = '0';
	printf("%d", ft_isdigit(a));
} */