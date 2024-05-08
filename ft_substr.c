/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:54:23 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/07 22:40:00 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	substring = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	substring = (char *)ft_calloc(len + 1, sizeof(char));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && len > 0)
	{
		substring[i] = s[start + i];
		i++;
		len--;
	}
	return (substring);
}
/*
int	main(void)
{
	char *result = ft_substr("Test Cubed Testing", 5, 1);
	printf("%s", result);
	free(result);
	return (0);
}
*/