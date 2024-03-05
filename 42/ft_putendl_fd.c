/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:39:16 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/05 13:40:58 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, size_t fd)
{
	size_t	i;

	i = 0;
	if (!str)
		return ;
	while (str[i] != '\0')
	{
		write(fd, str[i], 1);
		str++;
	}
	ft_putchar_fd('\n', fd);
}
