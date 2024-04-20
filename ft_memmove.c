/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:38:43 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/04/20 02:51:21 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *temp_dest;
	char *temp_src;
	size_t count;

	temp_dest = (char *)dest;
	temp_src = (char *)src;
	count = 0;

	if (dest == NULL && src == NULL)
		return (NULL);

	if (temp_dest > temp_src)
	{
		while (n-- > 0)
		{
			temp_dest[n] = temp_src[n];
		}
	}
	else
	{
		while (count < n)
		{
			temp_dest[count] = temp_src[count];
			count++;
		}
	}
	return (dest);
}
