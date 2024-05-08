/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 02:51:57 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/07 12:17:24 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (s == NULL && f == NULL)
		return (NULL);
	str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = ('\0');
	return (str);
}
/*
void	ft_strtolower(unsigned int i, char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z' && i != -1)
			*str += 32;
		str++;
	}
}

int	main()
{
	char str[] = "HELLO WORD";
	ft_strmapi(str, &ft_strtolower);
	return (0);
}
*/