/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:01:48 by recherra          #+#    #+#             */
/*   Updated: 2023/12/30 15:41:21 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    i = 0;
    unsigned char *d = dst;
    const unsigned char *s = src;

    if (!dst && !src)
        return (dst);
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}
