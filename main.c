/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:58:28 by recherra          #+#    #+#             */
/*   Updated: 2023/12/15 12:27:57 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char src[] = "abcd";
	char dest[] = "";
	char src2[] = "abcd";
	char dest2[] = "";

	printf("\n\nORIGINAL\n");
	printf("%lu", strlcpy(dest, src, sizeof dest));
	printf("\n%s\n", dest);
	printf("%s\n", src);
	printf("\n\nMIMIC\n");
	printf("%lu", ft_strlcpy(dest2, src2, sizeof dest2));
	printf("\n%s\n", dest2);
	printf("%s\n", src2);
}