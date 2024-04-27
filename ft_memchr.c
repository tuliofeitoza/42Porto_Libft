/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:17:27 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/04/27 19:29:18 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp_s;
	unsigned char	tmp_c;

	i = 0;
	tmp_s = (unsigned char *)s;
	tmp_c = (unsigned char)c;
	while (i < n)
	{
		if (tmp_s[i] == tmp_c)
			return ((unsigned char *)tmp_s);
		i++;
	}
	return (NULL);
}
