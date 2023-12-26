/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:49:08 by recherra          #+#    #+#             */
/*   Updated: 2023/12/26 20:02:10 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *curr;
	t_list *ne;

	curr = *lst;

	if (!lst || !del)
		return ;
	if (*lst)
	{
		while (curr)
		{
			ne = curr;
			curr = curr->next;
			del(ne->content);
			free(ne);
		}
	}
	*lst = NULL;
}