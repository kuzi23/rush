/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:47:21 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/09 16:00:14 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	d;
	unsigned char	*f;

	i = 0;
	d = (unsigned char)c;
	f = (unsigned char *)s;
	while (i < n)
	{
		if (f[i] == (char) d)
		{
			return ((void *) & f[i]);
		}
		i++;
	}
	return (0);
}
