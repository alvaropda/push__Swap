/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:57:06 by apeinado          #+#    #+#             */
/*   Updated: 2022/05/06 10:58:13 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cnt;
	t_list	*paco;

	cnt = 0;
	if (!lst)
		return (0);
	paco = lst;
	while (paco)
	{
		cnt++;
		paco = paco->next;
	}
	return (cnt);
}
