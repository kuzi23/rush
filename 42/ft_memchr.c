/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:47:21 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/14 08:41:02 by mkwizera         ###   ########.fr       */
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
		if (f[i] == d)
		{
			return ((void *) & f[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
// 	printf("%s\n",(char *)ft_memchr(tab, -1,7));
// 	return (0);
// }
