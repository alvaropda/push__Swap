/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:32:33 by apeinado          #+#    #+#             */
/*   Updated: 2022/04/19 14:05:09 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int pos)
{
	if ((pos >= 'a' && pos <= 'z')
		|| (pos >= 'A' && pos <= 'Z')
		|| (pos >= '0' && pos <= '9'))
		return (1);
	else
		return (0);
}
