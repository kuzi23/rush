/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:17:51 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/11 10:20:19 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int z)
{
	if (z >= 97 && z <= 122)
	{
		z = z - 32;
	}
	return (z);
}
