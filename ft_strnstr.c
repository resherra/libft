/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:45:45 by recherra          #+#    #+#             */
/*   Updated: 2023/12/15 15:59:44 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// if to_find == "" || str == "" , return (str);
// if len == 0 , return (null);

// int ft_strncmp(const char *s1, const char *s2, size_t n);
// size_t ft_strlen(const char *s);

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int	i;
	int	is_diff;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	while (str[i] && len)
	{
		if ((str[i] == to_find[0]) && ft_strlen(to_find) <= len)
		{
			is_diff = ft_strncmp(str + i, to_find, ft_strlen(to_find));
			if (is_diff == 0)
				return ((char *)(str + i));
		}
		i++;
		len--;
	}
	return (NULL);
}
