/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:30:33 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/11 10:22:46 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	else
	{
		return (c);
	}
}

// int	main(void)
// {
// 	char	test_char;
// 	char	lowercase_char;

// 	test_char = '&';
// 	printf("Original character: %c\n", test_char);
// 	lowercase_char = ft_tolower(test_char);
// 	printf("Lowercase character: %c\n", lowercase_char);
// 	return (0);
// }
