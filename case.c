/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:42:27 by apeinado          #+#    #+#             */
/*   Updated: 2022/08/10 12:32:54 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	next_next_case(t_stack **a, t_stack **b, int c, t_var *v)
{
	t_stack	*tmp;

	tmp = NULL;
	if (c == 7 && list_size(*b) > 1)
	{
		ft_putstr_fd("sb\n" v->fd);
		s_stack(a);
	}
	else if (c == 8 && list_size(*a) > 1)
	{
		ft_putstr_fd("sa\n", v->fd);
		s_stack(a);
	}
}

void	next_case(t_stack **a, t_stack **b, int c, t_var *v)
{
	t_stack	*tmp;

	tmp = NULL;
	if (c == 4)
	{
		ft_putstr_fd("pa\n", v->fd);
		p_stack(b, a, tmp);
		free(tmp);
	}
	else if (c == 5 && list_size(*b) > 1)
	{
		ft_putstr_fd("rb\n", v->fd);
		r_stack(b);
		free(tmp);
	}
	else if (c == 6 && list_size(*b) > 1)
	{
		ft_putstr_fd("rrb\n", v->fd);
		rr_stack(b, tmp);
		free(tmp);
	}
	else
		next_next_case(a, b, c, v);
}

void	pick_case(t_stack **a, t_stack **b, int c, t_var *v)
{
	t_stack	*tmp;

	tmp = NULL;
	if (c == 1)
	{
		ft_putstr_fd("pb\n", v->fd);
		p_stack(a, b, tmp);
		free(tmp);
	}
	else if (c == 2)
	{
		ft_putstr_fd("ra\n", v->fd);
		r_stack(a);
		free(tmp);
	}
	else if (c == 3 && list_size(*a) > 1)
	{
		ft_putstr_fd("rra\n", v->fd);
		rr_stack(a, tmp);
	}
	else
		next_case(a, b, c, v);
}
