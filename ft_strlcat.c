/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:53:36 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/04/20 02:59:07 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_count;
    size_t remaining; //vulgo resto; 
    size_t src_len;

    dst_count = ft_strlen(dst);
    src_len = ft_strlen(src);
        
    remaining = size - dst_count - 1;
    
    while (*dst != '\0')
        dst++;

    while (remaining > 0 && *src != '\0')
    {
        *dst++ = *src++;
        remaining--;
    }    
    
    *dst = ('\0');

    return (dst_count + src_len);
}
