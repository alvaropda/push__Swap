/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeinado <apeinado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:50:00 by apeinado          #+#    #+#             */
/*   Updated: 2022/05/02 12:23:26 by apeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_cnt(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			cnt++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (cnt);
}

char	**free_machine(char **s, size_t idx)
{
	while (s[idx] != NULL && idx >= 0)
	{
		free(s[idx]);
		s[idx] = NULL;
		idx--;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char	**ft_paco(char const *s, char c, char **words, size_t word_cnt)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = 0;
			while (*(s + len) && *(s + len) != c)
				len++;
			words[i++] = ft_substr(s, 0, len);
			if (i - 1 < word_cnt && !words[i - 1])
				return (free_machine(words, i));
			s += len;
		}
	}
	words[i] = 0;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_cnt;
	char	**words;

	if (!s)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (get_cnt(s, c) + 1));
	if (!words)
		return (NULL);
	word_cnt = get_cnt(s, c);
	ft_paco(s, c, words, word_cnt);
	return (words);
}
