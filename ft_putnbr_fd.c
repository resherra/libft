/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:06:00 by recherra          #+#    #+#             */
/*   Updated: 2023/12/20 18:51:27 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	long	nb;
	char	re[11];

	i = 0;
	nb = n;
	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		re[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	while (--i >= 0)
		write(fd, &re[i], 1);
}
