/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:28:21 by mkwizera          #+#    #+#             */
/*   Updated: 2024/03/13 14:07:02 by mkwizera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] == c)
		i++;

	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}


char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		start;
	int		j;
	int		wd;

	wd = ft_count_words((char *)s, c);
	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (wd + 1));
	if (tab == NULL)
		return (NULL);
	while (j < wd)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		tab[j++] = ft_substr((char *)s, start, (i - start));
	}
	tab[j] = NULL;
	return (tab);
}
