/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:58:28 by recherra          #+#    #+#             */
/*   Updated: 2023/12/12 19:07:26 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int a[5];
	int b[5];
	for (int i = 0; i < 5; i++)
		a[i] = 5;
	for (int i = 0; i < 5; i++)
		b[i] = 5;
	ft_bzero(b, 12);
	bzero(a, 12);
	for (int j = 0; j < 5; j++)
		printf("%d ", a[j]);
	printf("\n");
	for (int k = 0; k < 5; k++)
		printf("%d ", b[k]);
}