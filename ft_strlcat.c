/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:53:36 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/04/27 19:21:29 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_count;
	size_t	dst_org;
	size_t	src_len;

	dst_count = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst_org = ft_strlen(dst);
	if (size == 0)
		return (src_len);
	if (size < dst_count)
		return (size + src_len);
	while (*src != '\0' && dst_count < size - 1)
	{
		dst[dst_count] = *src++;
		dst_count++;
	}
	dst[dst_count] = ('\0');
	return (dst_org + src_len);
}
