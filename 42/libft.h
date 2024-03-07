/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzi <kuzi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:18:30 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/07 09:01:27 by kuzi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

size_t		ft_strlen(const char *str);
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
char	*ft_strdup(const char *s1);
void	*ft_memcpy(void *dst, const void *s1, size_t n);
char	*ft_strdup(const char *s1);
void	ft_putchar_fd(char z, int fd);
void	ft_putstr_fd(char *str, size_t fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *str, size_t fd);
char	*ft_strmapi(char const *s, char (*f)(unsigned	int, char));
void	ft_striter(char *s, void (*f)(unsigned	int, char *));
char	*ft_itoa(int n);
char    *ft_substr(char const *s, unsigned int start, size_t len);// has a problem .
char    *ft_strjoin(char const *s1, char const *s2);// has problem..