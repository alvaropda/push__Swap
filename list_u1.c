/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_u1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:29:02 by apeinado          #+#    #+#             */
/*   Updated: 2022/08/09 12:50:19 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (*stack)
	{
		while (*stack)
		{
			tmp = (*stack)->next;
			free(*stack);
			*stack = NULL;
			(*stack) = tmp;
		}
		free(*stack);
		*stack = NULL;
	}
}

int	list_size(t_stack *a)
{
	int	len;

	len = 0;
	while (a)
	{
		len++;
		a = a->next;
	}
	return (len);
}

void	add_back(t_stack **top, t_stack *new)
{
	t_stack	*tmp;

	if (*top == NULL)
		*top = new;
	else
	{
		tmp = *top;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
}

void	add_back_r(t_stack **top)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = NULL;
	tmp1 = *top;
	tmp2 = (*top)->prev;
	while (tmp1->next)
		tmp1 = tmp1->next;
	tmp1->next = tmp2;
	tmp1->next->prev = tmp1;
	tmp1->next->next = NULL;
}

void	add_front(t_stack **top, t_stack *new)
{
	new->next = (*top);
	new->prev = NULL;
	if ((*top) != NULL)
		(*top)->prev = new;
	(*top) = new;
}
