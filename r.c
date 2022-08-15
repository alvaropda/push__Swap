/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:53:45 by apeinado          #+#    #+#             */
/*   Updated: 2022/08/15 11:14:38 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*rr_swap(t_stack *top, t_stack *tmp)
{
	while (top->next)
		top = top->next;
	tmp->num = top->num;
	tmp->next = NULL;
	tmp->prev = NULL;
	return (tmp);
}

void	rr_bottom(t_stack **top)
{
	while ((*top))
	{
		if ((*top)->next->next == NULL)
			break ;
		*top = (*top)->next;
	}
	free((*top)->next);
	(*top)->next = NULL;
}

void	rr_stack(t_stack **top, t_stack *tmp)
{
	t_stack	*a;

	a = NULL;
	tmp = NULL;
	if (*top)
	{
		tmp = (t_stack *)malloc(sizeof(t_stack));
		if (tmp == NULL)
			return ;
		tmp = rr_swap(*top, tmp);
		a = *top;
		rr_bottom(top);
		*top = a;
		add_front(top, tmp);
	}
}

void	r_stack(t_stack **top)
{
	if (*top)
	{
		*top = (*top)->next;
		add_back_r(top);
	}
}
