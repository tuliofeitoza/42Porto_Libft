/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:36:00 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/04/27 18:14:29 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	len;

	len = ft_strlen(s) + 1;
	new_s = malloc(sizeof(char) * len);
	if (new_s == NULL)
		return (NULL);
	new_s = ft_memcpy(new_s, s, len);
	return (new_s);
}
/*
int	main(void)
{
    printf("%s", ft_strdup(""));
}
*/