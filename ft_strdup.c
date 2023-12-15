/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:02:35 by recherra          #+#    #+#             */
/*   Updated: 2023/12/15 16:24:19 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	str = malloc((sizeof(char) * len) + 1);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
