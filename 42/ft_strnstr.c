/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:56:23 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/13 16:51:38 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *str, const char *sub, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*str == '\0' && n == 0)
		return (0);
	if (*sub == '\0' || *sub == *str)
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (((i + j) < n) && str[i + j] == sub[j])
		{
			if (str[i + j] == '\0' || sub[j] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		if (sub[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
