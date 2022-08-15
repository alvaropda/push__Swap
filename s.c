/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:18:07 by apeinado          #+#    #+#             */
/*   Updated: 2022/08/15 11:14:41 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_stack(t_stack **top)
{
	int		i;
	int		j;
	t_stack	*tmp;

	tmp = NULL;
	if ((*top) && (*top)->next)
	{
		tmp = *top;
		i = (*top)->num;
		j = (*top)->next->num;
		tmp = *top;
		(*top)->num = j;
		tmp = *top;
		(*top)->next->num = i;
		(*top) = tmp;
	}
}
