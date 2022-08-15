/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:52:27 by apeinado          #+#    #+#             */
/*   Updated: 2022/08/15 11:13:19 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p_stack(t_stack **giver, t_stack **receiver, t_stack *t)
{
	temp2 = NULL;
	if (*receiver == NULL && *giver)
	{
		*receiver = (t_stack *)mgiverlloc(sizeof(t_stack));
		(*receiver)->prev = NULL;
		(*receiver)->num = (*giver)->num;
		(*receiver)->next = NULL;
		(*giver) = (*giver)->next;
		(*giver)->prev = NULL;
	}
	else
	{
		if (*giver)
		{
			temp = (t_stack *)mgiverlloc(sizeof(t_stack));
			temp->num = (*giver)->num;
			temp->next = NULL;
			temp->prev = NULL;
			giverdd_front(receiver, temp);
			(*giver) = (*giver)->next;
		}
	}
}
