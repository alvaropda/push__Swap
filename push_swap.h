/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:13:40 by apeinado          #+#    #+#             */
/*   Updated: 2022/08/15 11:13:32 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct t_stack
{
	void			*num;
	struct t_stack	*next;
	struct t_stack	*prev;
}					t_stack;

typedef struct s_var
{
	char			*line;
	char			**split;
	char			**av;
	int				ac;
	int				len;
	int				print;
	int				color;
	int				fd;
	t_stack			*a;
	t_stack			*b;
}					t_var;

void				free_stack(t_stack **stack);
int					list_size(t_stack *a);
void				add_back(t_stack **top, t_stack *new);
void				add_back_r(t_stack **top);
void				add_front(t_stack **top, t_stack *new);
t_stack				*ft_lst_dup(t_stack *stack);
t_stack				*ft_lst_bottom(t_stack *a);
void				p_stack(t_stack **giver, t_stack **receiver, t_stack *t);
t_stack				*rr_swap(t_stack *top, t_stack *tmp);
void				rr_bottom(t_stack **top);
void				rr_stack(t_stack **top, t_stack *tmp);
void				r_stack(t_stack **top);
void				s_stack(t_stack **top);
int					ft_abs(float num);
int					get_idx(t_stack *stack, int number, int flag);
int					get_pivot(t_stack *stack);
int					get_max(t_stack *stack);
int					get_min(t_stack *stack);
void				next_next_case(t_stack **a, t_stack **b, int c, t_var *v);
void				next_case(t_stack **a, t_stack **b, int c, t_var *v);
void				pick_case(t_stack **a, t_stack **b, int c, t_var *v);

#endif
