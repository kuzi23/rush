/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:02:28 by kuzi              #+#    #+#             */
/*   Updated: 2024/03/13 16:22:10 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
    if (dst == src)
	    return (dst);
    if (s >= d && s < d + len)
	{
		while (i < len)
		{
			*d++ = *s++;
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (d);
}


// int main() {
//     char src[] = "Hello, world!";
//     char dst[20]; // Make sure dst has enough space

//     // Using memmove to copy overlapping memory regions
//     //memmove(dst, src, strlen(src) + 1); // +1 to copy the null terminator
//     ft_memmove(dst, src, ft_strlen(src) + 1);
//     // Printing the content of the destination array
//     printf("Destination string after memmove: %s\n", dst);

//     return 0;
// }
