/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:36:26 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/09 15:36:12 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char) c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
//     char *result = ft_strchr("marius", 'a');
//     if (result != NULL) {
//         printf("Character found at position: %ld\n", result - "marius");
//     } else {
//         printf("Character not found\n");
//     }
//     return (0);
// }