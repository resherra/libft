/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:06:45 by recherra          #+#    #+#             */
/*   Updated: 2023/12/18 12:38:34 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s, char const *set)
{
    int i;
    int k;
    int j;
    int q;
    int len;
    char *ret;
    int size;

    i = 0;
    k = 0;
    q = 0;
    if (!(s))
        return (NULL);
    len = ft_strlen(s);
    while (s[i])
    {
        if (!ft_strchr(set, s[i]))
            break;
        i++;
    }
    j = len;
    while (j >= 0 && i < len)
    {
        if (!ft_strchr(set, s[j]))
            break;
        j--;
    }
    size = j - i + 1;
    ret = malloc(size + 1);
    if (!ret)
        return (NULL);
    while (q < size)
        ret[q++] = s[i++];
    ret[q] = '\0';
    return (ret);
}
