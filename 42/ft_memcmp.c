/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:17:26 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/14 08:14:31 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*str;
	unsigned const char	*str2;
	size_t				i;

	str = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str[i] != str2[i])
		{
			return ((unsigned char)str[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}

// int main() {
//     char str1[] = "Hello";
//     char str2[] = "Hello";
//     size_t len = strlen(str1) + 1; // +1 to include the null terminator
//     // Testing ft_memcmp
//     int result1 = ft_memcmp(str1, str2, len);
//     int result2 = memcmp(str1, str2, len);
//     // Output the results
//     printf("Result from ft_memcmp: %d\n", result1);
//     printf("Result from memcmp: %d\n", result2);
//     if (result1 == result2) {
//         printf("ft_memcmp matches memcmp.\n");
//     } else {
//         printf("ft_memcmp does not match memcmp.\n");
//     }
//     return 0;
// }
