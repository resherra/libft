/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:06:45 by recherra          #+#    #+#             */
/*   Updated: 2023/12/17 21:48:15 by recherra         ###   ########.fr       */
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

    i = 0;
    k = 0;
    if (*s == 0)
        return NULL;
    len = ft_strlen(s);
    j = len;
    while (s[i] && i <= len / 2)
    {
        if (!ft_strchr(set, s[i]))
            break;
        i++;
    }
    while (j >= len / 2)
    {
        if (!ft_strchr(set, s[j]))
            break;
        j--;
    }
    ret = malloc((j - i) + 1);
    q = i;
    if (!ret)
        return NULL;
    while (k <= j - i)
        ret[k++] = s[q++];
    ret[k] = '\0';
    return (ret);
}
