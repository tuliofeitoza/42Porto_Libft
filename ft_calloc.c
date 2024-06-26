/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:33:57 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/01 19:28:10 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			count;

	count = nmemb * size;
	tmp = malloc(count);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, count);
	return (tmp);
}
