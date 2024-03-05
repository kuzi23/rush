/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzi <kuzi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:18:30 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/04 09:55:56 by kuzi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_isadigit(int dg);
int		ft_isalnum(int n);
int		ft_isalpha(int ch);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int z);
int		ft_strlcat(char *dest, char *src, int n);
char	*ft_strnstr(const char *str, const char *sub, int n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t num_elements, size_t element_size);
void	*ft_memset(void *s, int c, size_t n);
char    *ft_strdup(const char *s1);
void    *ft_memcpy(void *dst, const void *s1, size_t n);
void    ft_putchar_fd(char z, int fd);
void    ft_putstr_fd(char *str, size_t fd);