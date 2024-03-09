/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 10:02:02 by kuzi              #+#    #+#             */
/*   Updated: 2024/03/09 10:19:35 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *s1, size_t n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	dest = (char *)dst;
	src = (const char *)s1;
	if (!dest && !src)
	{
		return (NULL);
	}
	if (src != dest)
	{
		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
