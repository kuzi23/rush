/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:25:08 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/14 10:01:58 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	if (n <= dest_len)
		return (ft_strlen(src) + n);
	while (src[i] != '\0' && dest_len + i + 1 < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (ft_strlen(src) + dest_len);
}

// int	main()
// {
// 	char	*dest;
// 	int		arg;
// 	dest[10] = 'a';
// 	printf("%s\n",ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
// 	write(1, "\n", 1);
// 	write(1, dest, 15);
// 	memset(dest, 'r', 15);
// 	printf("%s\n",dest, "lorem ipsum dolor sit amet", 5);
// 	write(1, "\n", 1);
// 	write(1, dest, 15);
// 	return (0);
// }