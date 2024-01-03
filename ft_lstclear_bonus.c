/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resherra <resherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:49:08 by recherra          #+#    #+#             */
/*   Updated: 2024/01/03 18:30:54 by resherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ne;

	if (!lst || !del)
		return ;
	if (*lst)
	{
		while (*lst)
		{
			ne = *lst;
			*lst = (*lst)->next;
			del(ne->content);
			free(ne);
		}
	}
}