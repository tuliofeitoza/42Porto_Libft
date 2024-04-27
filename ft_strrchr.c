/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 01:22:45 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/04/27 20:22:56 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (const char)c)
			count++;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	i = 0;
	while (count > 0)
	{
		if (s[i] == (const char)c)
			count--;
		if (count == 0)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
