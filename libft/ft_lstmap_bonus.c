/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:56:29 by apeinado          #+#    #+#             */
/*   Updated: 2022/05/06 10:58:10 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*position_new;
	t_list	*position_old;

	if (!lst)
		return (NULL);
	new_lst = ft_lstnew((*f)(lst->content));
	if (!new_lst)
		return (NULL);
	position_new = new_lst;
	position_old = lst->next;
	while (position_old)
	{
		position_new->next = ft_lstnew((*f)(position_old->content));
		if (!(position_new->next))
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		position_new = position_new->next;
		position_old = position_old->next;
	}
	return (new_lst);
}
