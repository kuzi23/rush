/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:18:30 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/13 12:02:46 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>

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
int		**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned	int, char *));
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

#endif