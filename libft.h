/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:40:06 by recherra          #+#    #+#             */
/*   Updated: 2023/12/15 11:49:33 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>

// int		ft_isalpha(int c);
// int		ft_isdigit(int c);
// int		ft_isalnum(int c);
// int		ft_isascii(int c);
// int		ft_isprint(int c);
// int		ft_toupper(int c);
// int		ft_tolower(int c);
size_t ft_strlen(const char *s);
// int		ft_atoi(const char *str);
void *ft_memset(void *b, int c, size_t len);
// char	*ft_strchr(const char *s, int c);
// char	*ft_strrchr(const char *s, int c);
// void	ft_bzero(void *s, size_t n);
// int ft_strncmp(const char *s1, const char *s2, size_t n);
// void	*ft_memchr(const void *str, int c, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
// int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif