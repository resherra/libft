/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:33:14 by recherra          #+#    #+#             */
/*   Updated: 2023/12/30 19:00:13 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char *d = dst;
    const unsigned char *s = src;

	if (!dst && !src)
		return (dst);
	if (d >= s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
