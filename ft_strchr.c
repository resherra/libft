/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:59:33 by recherra          #+#    #+#             */
/*   Updated: 2023/12/10 16:20:53 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*str;

	i = 0;
	str = s;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)str + i);
		}
		i++;
	}
	if (c == '\0')
		return ("\0");
	return (NULL);
}
