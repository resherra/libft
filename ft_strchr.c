/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:59:33 by recherra          #+#    #+#             */
/*   Updated: 2023/12/11 21:37:17 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int		len;
	char	*s;
	char	ac;

	len = (int)ft_strlen(str);
	s = (char *)str;
	ac = c;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)ac)
			return ((char *)s);
		s++;
	}
	if (ac == '\0')
		return ((char *)(str + len));
	return (NULL);
}
