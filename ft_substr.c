/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:04:03 by recherra          #+#    #+#             */
/*   Updated: 2023/12/16 20:05:25 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;
	size_t size;

	size = ft_strlen(s);
	if (*s == 0 || (start) > (unsigned int)(size - 1))
		return ft_strdup("");
	if (len <= (size - start))
		str = malloc(len + 1);
	else
		str = malloc((size - start) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while ((i < len) && s[i + start])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
