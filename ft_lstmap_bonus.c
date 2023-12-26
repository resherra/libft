/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:33:01 by recherra          #+#    #+#             */
/*   Updated: 2023/12/26 21:50:54 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    int size = ft_lstsize(lst);
    t_list *ne;
    t_list *curr = lst;

    ne = malloc(size * sizeof(t_list));
    if (!ne)
        return NULL;
    while (curr)
    {

        curr = curr->next;
    }
}