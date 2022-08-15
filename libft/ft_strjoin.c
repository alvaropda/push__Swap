/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:38:58 by apeinado          #+#    #+#             */
/*   Updated: 2022/04/29 10:00:39 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		i_join;

	if (!s1 || !s2)
		return (NULL);
	join = malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2)
				+ 1));
	if (!join)
		return (NULL);
	i = 0;
	i_join = 0;
	while (s1[i])
		join[i_join++] = s1[i++];
	i = 0;
	while (s2[i])
		join[i_join++] = s2[i++];
	join[i_join] = '\0';
	return (join);
}

/* int	main(void)
{
	char *str;

	str = ft_strjoin("Hello, 42Malaga!", "me quiero peer");
	printf("%s", str);
	return (0);
} */