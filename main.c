/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:58:28 by recherra          #+#    #+#             */
/*   Updated: 2023/12/16 21:45:38 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *src = "hello";
	char *dst = "jack";

	printf("%zu\n", ft_strlcat(dst, src, 4));
	printf("%s\n", dst);
}