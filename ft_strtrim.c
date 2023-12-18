/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:06:45 by recherra          #+#    #+#             */
/*   Updated: 2023/12/18 17:39:56 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	start(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!ft_strchr(set, s[i]))
			break ;
		i++;
	}
	return (i);
}

static int	end(char const *s, char const *set, int len, int i)
{
	while (len >= 0 && i < len)
	{
		if (!ft_strchr(set, s[len]))
			break ;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	int		j;
	int		q;
	char	*ret;
	int		size;

	i = 0;
	q = 0;
	if (!(s))
		return (NULL);
	i = start(s, set);
	j = end(s, set, ft_strlen(s), i);
	size = j - i + 1;
	ret = malloc(size + 1);
	if (!ret)
		return (NULL);
	while (q < size)
		ret[q++] = s[i++];
	ret[q] = '\0';
	return (ret);
}
