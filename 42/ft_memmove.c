/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:02:28 by kuzi              #+#    #+#             */
/*   Updated: 2024/03/14 11:03:23 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	j = 1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += j;
		s += j;
		i++;
	}
	return (dest);
}

// int		main(int argc, const char *argv[])
// {
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	*dest;
// 	int		arg;
// 	dest = src + 1;
// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (dest != ft_memmove(dest, "consectetur", 5))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 2)
// 	{
// 		if (dest != ft_memmove(dest, "con\0sec\0\0te\0tur", 10))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 3)
// 	{
// 		if (dest != ft_memmove(dest, src, 8))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 4)
// 	{
// 		if (src != ft_memmove(src, dest, 8))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 5)
// 	{
// 		if (src != ft_memmove(src, dest, 0))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	return (0);
// }
