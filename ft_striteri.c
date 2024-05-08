/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 03:45:29 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/07 12:07:50 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	ft_strtoupper(unsigned int i, char *str)
{
	
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z' && i != -1)
			*str -= 32;
		str++;
	}
}

int	main(void)
{
	char str[] = "hello word";
	ft_striteri(str, &ft_strtoupper);
	return (0);
}
*/
