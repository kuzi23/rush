/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:25:08 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/13 21:21:18 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	dest_len;
	size_t	j;

	dest_len = ft_strlen(dest);
	j = dest_len;
	i = 0;
	while (src[i] != '\0' && j < n -1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (n < dest_len)
		return (ft_strlen(src) + n);
	else if (dest_len >= n)
		return (ft_strlen(src) + dest_len + i);
	else
		return (ft_strlen(src) + dest_len);
}

