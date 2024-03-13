/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:25:12 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/13 20:04:49 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (sign * res);
}

// int main() {
//     char str1[] = "12345";
//     char str2[] = "-6789";
//     char str3[] = "  +42";
//     char str4[] = "  -99xyz";

//     // Test positive number
//     int num1 = ft_atoi(str1);
//     printf("ft_atoi(\"%s\") = %d\n", str1, num1);

//     // Test negative number
//     int num2 = ft_atoi(str2);
//     printf("ft_atoi(\"%s\") = %d\n", str2, num2);

//     // Test number with leading spaces and sign
//     int num3 = ft_atoi(str3);
//     printf("ft_atoi(\"%s\") = %d\n", str3, num3);

//     // Test number with leading spaces, sign, and non-numeric characters
//     int num4 = ft_atoi(str4);
//     printf("ft_atoi(\"%s\") = %d\n", str4, num4);

//     return 0;
// }
