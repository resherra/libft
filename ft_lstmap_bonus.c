/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:33:01 by recherra          #+#    #+#             */
/*   Updated: 2023/12/28 11:44:43 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterates the list ’lst’ and applies the function ’f’ on the content of
//  each node.
// Creates a new list resulting of the successive applications
//  of the function ’f’. The ’del’ function is used to delete the content of
// a node if needed.

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *ne;
    t_list *ne_node;

    if (!lst || !f)
        return NULL;
    ne = NULL;
    while (lst)
    {
        ne_node = ft_lstnew(f(lst->content));
        if (!ne_node)
        {
            ft_lstclear(&ne, del);
            return NULL;
        }
        ft_lstadd_back(&ne, ne_node);
        lst = lst->next;
    }
    return ne;
}