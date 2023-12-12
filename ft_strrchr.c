/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:37:54 by recherra          #+#    #+#             */
/*   Updated: 2023/12/12 13:01:28 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int		len;
	char	*s;
	char	ac;

	len = (int)ft_strlen(str);
	s = (char *)str;
	ac = c;

    printf("last adress %p char %c\n", &str[len  - 2], str[len - 2]);
    while (*s)
        s++;
    while (len--)
    {
        if (*s == ac)
        {
            printf("address %p\n", &s[len], len);
        }
        s--;
    }

    return (char *)str;
}