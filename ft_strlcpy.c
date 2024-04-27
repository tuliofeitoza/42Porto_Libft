/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:45:53 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/04/27 18:52:57 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	src_len;

	count = 0;
	src_len = ft_strlen(src);
	if (size > 0)
	{
		while (*src != '\0' && count < size - 1)
		{
			*dst++ = *src++;
			count++;
		}
		*dst = ('\0');
	}
	return (src_len);
}
