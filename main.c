/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:58:28 by recherra          #+#    #+#             */
/*   Updated: 2023/12/15 15:52:42 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	const char *str = "abcdefgh";
	const char *tofind = "abc";
	size_t n = 4;
	printf("\nORIGINAL\n%s\n", strnstr(str, tofind, n));
	printf("\nMIMIC\n%s\n", ft_strnstr(str, tofind, n));
}