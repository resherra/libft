/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:58:28 by recherra          #+#    #+#             */
/*   Updated: 2023/12/17 12:26:20 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *src = "hello";
	char dst[20] = "hell";

	printf("\nORIGINAL\n");
	printf("%zu\n", strlcat(dst, src, sizeof dst));
	printf("%s\n", dst);
	printf("\nMIMIC\n");
	char *src2 = "hello";
	char dst2[20] = "hell";
	printf("%zu\n", ft_strlcat(dst2, src2, sizeof dst));
	printf("%s\n", dst2);
}