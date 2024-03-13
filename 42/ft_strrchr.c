/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:21:09 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/13 12:51:25 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char) c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (0);
}

// int main()
// {
//     char *result = ft_strrchr("marius", 'a');
//     if (result != NULL) {
//         printf("Character found at position: %ld\n", result - "marius");
//     } else {
//         printf("Character not found\n");
//     }
//     return (0);
// }