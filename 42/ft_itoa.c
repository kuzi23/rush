/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:21:36 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/05 20:26:35 by mkwizera         ###   ########.fr       */
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


char	*ft_itoa(int num)
{
	char	*str;
	int		digit_count;

	digit_count = 0;
	if (num == 0)
		return (ft_strdup("0"));
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	if (num < 0)
	{
		num = -1 * num;
		digit_count++;
	}
	digit_count += count_digits(num);
	if (!(str == (char *)malloc(sizeof(char) * (digit_count + 1))))
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

