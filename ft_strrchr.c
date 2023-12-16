/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:37:54 by recherra          #+#    #+#             */
/*   Updated: 2023/12/16 19:54:47 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	int len;
	char *s;
	char ac;

	len = ft_strlen(str);
	s = (char *)str;
	ac = c;
	if (ac == '\0')
		return ((char *)(s + len));
	while (len--)
	{
		if (ac == str[len])
		{
			return ((char *)s + len);
		}
	}
	return (NULL);
}
