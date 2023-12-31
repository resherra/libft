/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:02:35 by recherra          #+#    #+#             */
/*   Updated: 2023/12/31 20:20:07 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *str;
    int len;
    int i;

    i = 0;
    len = ft_strlen(s1);
    str = ft_calloc((len + 1), sizeof(char));
    if (str == NULL)
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    return (str);
}
