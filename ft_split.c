/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:20:28 by recherra          #+#    #+#             */
/*   Updated: 2023/12/24 19:46:12 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

static int	count_words(char const *s, char sep)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && check_sep(s[i], sep))
			i++;
		if (s[i] && !check_sep(s[i], sep))
			words++;
		while (s[i] && !check_sep(s[i], sep))
			i++;
	}
	return (words);
}

static char	*word(const char *s, char sep)
{
	int		i;
	int		j;
	char	*re;

	i = 0;
	j = 0;
	while (s[j] && !check_sep(s[j], sep))
		j++;
	re = malloc(j + 1);
	if (!re)
		return (NULL);
	while (i < j)
	{
		re[i] = s[i];
		i++;
	}
	re[i] = '\0';
	return (re);
}

static void	*ffree(char **re, int index)
{
	int	i;

	i = 0;
	while (i < index)
		free(re[i++]);
	free(re);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**re;
	char	*wrd;
	int		i;

	i = 0;
	count = count_words(s, c);
	re = ft_calloc(count + 1, sizeof(char *));
	if (!re)
		return (NULL);
	while (*s)
	{
		while (*s && check_sep(*s, c))
			s++;
		if (*s && !check_sep(*s, c))
		{
			wrd = word(s, c);
			if (!wrd)
				return (ffree(re, i));
			re[i++] = wrd;
		}
		while (*s && !check_sep(*s, c))
			s++;
	}
	return (re);
}
