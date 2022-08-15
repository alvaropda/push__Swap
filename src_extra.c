/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_extra.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:03:47 by apeinado          #+#    #+#             */
/*   Updated: 2022/08/15 13:00:39 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_abs(float num)
{
	int	dummy;

	dummy = (int)num;
	if ((num - dummy) >= 0.5)
		return ((int)num + 1);
	else
		return ((int)num);
}
