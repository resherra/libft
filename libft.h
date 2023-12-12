/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:40:06 by recherra          #+#    #+#             */
/*   Updated: 2023/12/12 19:39:49 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

// int		ft_isalpha(int c);
// int		ft_isdigit(int c);
// int		ft_isalnum(int c);
// int		ft_isascii(int c);
// int		ft_isprint(int c);
// int		ft_toupper(int c);
// int		ft_tolower(int c);
size_t	ft_strlen(const char *s);
// int		ft_atoi(const char *str);
void	*ft_memset(void *b, int c, size_t len);
// char	*ft_strchr(const char *s, int c);
// char	*ft_strrchr(const char *s, int c);
// void	ft_bzero(void *s, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);


#endif