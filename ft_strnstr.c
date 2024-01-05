/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resherra <resherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:45:45 by recherra          #+#    #+#             */
/*   Updated: 2024/01/05 16:08:58 by resherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int		i;
	int		is_diff;
	size_t	tf_len;
	char	*s;
	char	*tf;

	if (!str && !len)
		return (NULL);
	s = (char *)str;
	tf = (char *)to_find;
	tf_len = ft_strlen(tf);
	i = 0;
	if (!tf_len)
		return (s);
	while (s[i] && len)
	{
		if ((s[i] == tf[0]) && tf_len <= len)
		{
			is_diff = ft_strncmp(s + i, tf, tf_len);
			if (is_diff == 0)
				return (s + i);
		}
		i++;
		len--;
	}
}
