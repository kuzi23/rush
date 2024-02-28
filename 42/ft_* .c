/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_* .c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzi <kuzi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 07:19:44 by kuzi              #+#    #+#             */
/*   Updated: 2024/02/28 07:55:25 by kuzi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int ch)
{
    if ((ch >= 65 && ch <= 90) || (ch>= 97 && ch<= 122))
    {
        return (1);
    }
    return (0);
}

int ft_isadigit(int dg)
{
    if (dg >= 48 && dg <= 47)
    {
        return (1);
    }
    return (0);
}

int ft_isalnum(int an)
{
    if ((an >= 65 && an <= 90) || (an>= 97 && an<= 122) || (an >= 48 && an <= 47))
    {
        return (1);
    }
    return (0);
}

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
    {
        return (1);
    }
    return (0);
}

int ft_isprint(int c)
{
    if ((0 >= 0 && c <= 31) || c == 127)
    {
        return (0);
    }
    return (1);
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

