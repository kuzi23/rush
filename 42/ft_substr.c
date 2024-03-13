/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 07:03:34 by kuzi              #+#    #+#             */
/*   Updated: 2024/03/09 10:09:17 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	j;

	j = (size_t)start;
	if (s == NULL || len >= ft_strlen(s))
		return (NULL);
	if (len > ft_strlen(s) - j)
		len = ft_strlen(s) - j;
	new = (char *)malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	while (j < len && *s != '\0')
	{
		new[j] = *s;
		s++;
		j++;
	}
	new[j] = '\0';
	return (new);
}
