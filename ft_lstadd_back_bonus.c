/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:11:13 by recherra          #+#    #+#             */
/*   Updated: 2023/12/23 11:02:18 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// typedef struct s_list
// {
//     void *content;
//     struct s_list *next;
// } t_list;

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    new->content = "jack";
    new->next = NULL;

    t_list *curr = *lst;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = new;
}