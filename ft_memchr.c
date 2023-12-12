/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:58:26 by recherra          #+#    #+#             */
/*   Updated: 2023/12/12 21:45:44 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//if c does not exist while n in s return (null);
//if c == \0 && n != strlen(s) return (null); else
// return \0
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned long	len;
	unsigned char	*s;
	unsigned char	ac;

	len = ft_strlen(str);
	s = (unsigned char *)str;
	ac = (unsigned char)c;
	while (*s && n--)
	{
		if (*s == ac)
			return (s);
		s++;
	}
	if (ac == '\0' && n != len)
		return ((char *)(str + len));
	return (NULL);
}
