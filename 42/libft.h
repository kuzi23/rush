/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzi <kuzi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:18:30 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/13 07:01:42 by kuzi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t num_elements, size_t element_size);
int		ft_isalnum(int n);
int		ft_isalpha(int ch);
int		ft_isascii(int c);
int		ft_isdigit(int dg);
int		ft_isprint(int c);
int		ft_isprint(int c);
char	*ft_itoa(int num);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *s1, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar_fd(char z, int fd);
void	ft_putendl_fd(char *str, size_t fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, size_t fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s1);
void	ft_striter(char *s, void (*f)(unsigned	int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlcat(char *dest, char *src, int n);
int		ft_strlcpy(char *dest, char *src, int n);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned	int, char));
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *str, const char *sub, int n);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int z);