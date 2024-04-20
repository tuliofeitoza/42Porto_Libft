/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:20:41 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/04/20 02:55:38 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int count;

    count = 0;
    
    while (s[count] != '\0')
    {
        if (s[count] == c)
            return ((char *)&s[count]);
        count++;
    }
    return (NULL);
}
