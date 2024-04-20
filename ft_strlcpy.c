/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:45:53 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/04/20 02:57:05 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  count;

    count = 0;

    if (size > 0)
    {
        while (*src != '\0' && count < size - 1)
        {
            *dst++ = *src++;
            count++;
        }
        *dst = ('\0');
    }
    return (count);
}
