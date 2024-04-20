/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 01:22:45 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/04/20 02:54:02 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int length;

    length = ft_strlen(s);

    while (length >= 0)
    {
        if (s[length] == c)
            return ((char *)&s[length]);
        length--;
    }
    return (NULL);
}