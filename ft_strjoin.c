/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 10:00:31 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/02 03:36:58 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*substr;
	size_t	cpys1;
	size_t	cpys2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	cpys1 = ft_strlen(s1);
	cpys2 = ft_strlen(s2);
	substr = ft_calloc(cpys1 + cpys2 + 1, sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s1, cpys1 + 1);
	ft_strlcpy(substr + cpys1, s2, cpys2 + 1);
	return (substr);
}
