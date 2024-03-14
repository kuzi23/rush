/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:21:36 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/14 10:32:07 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countsize(int n)
{
	int	size;
	int	num;

	size = 0;
	num = n;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 10;
		size++;
	}
	return (size);
}

char	*handle_special_cases(int num)
{
	if (num == 0)
		return (ft_strdup("0"));
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char	*ft_itoa(int num)
{
	char	*str;
	int		digit_count;

	digit_count = 0;
	str = handle_special_cases(num);
	if (str != NULL)
		return (str);
	if (num < 0)
	{
		num = -1 * num;
		digit_count++;
	}
	digit_count += ft_countsize(num);
	str = (char *)malloc(sizeof(char) * (digit_count + 1));
	if (!(str))
		return (NULL);
	str[digit_count] = '\0';
	while (num > 0)
	{
		str[digit_count-- - 1] = num % 10 + '0';
		num = num / 10;
	}
	if (digit_count == 1)
		str[0] = '-';
	return (str);
}

// int main()
// {
//     int num = -2147483648; // Change the number to test different cases
//     char *result = ft_itoa(num);
//     if (result != NULL)
//     {
//         printf("Integer: %d\n", num);
//         printf("String: %s\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }
//     return 0;
// }
