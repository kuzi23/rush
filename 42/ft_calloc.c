/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:04:46 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/14 08:13:56 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*ptr;

	if (num_elements == __SIZE_MAX__ || element_size == __SIZE_MAX__)
		return (NULL);
	ptr = (void *)malloc(num_elements * element_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, num_elements * element_size);
	return (ptr);
}
