/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:32:39 by recherra          #+#    #+#             */
/*   Updated: 2023/12/16 19:00:27 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t i;
  size_t size;
  char *sub;

  i = 0;
  size = ft_strlen(s);
  if (*s == 0 || (start) > (unsigned int)(size - 1))
    return (strdup(""));
  if (len <= size - start)
    sub = malloc(len + 1);
  else
    sub = malloc((size - start) + 1);
  if (!sub)
    return (NULL);
  while (i < len && s[start])
    sub[i++] = s[start++];
  sub[i] = 0;
  return (sub);
}
