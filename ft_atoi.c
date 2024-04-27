/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:24:47 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/04/25 16:30:21 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sing;
	int	index;

	result = 0;
	sing = 1;
	index = 0;
	while (nptr[index] == 32 || (nptr[index] >= 9 && nptr[index] <= 13))
		index++;
	if (nptr[index] == '+' || nptr[index] == '-')
	{
		if (nptr[index] == '-')
		{
			sing = -1;
		}
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		result = result * 10 + nptr[index] - 48;
		index++;
	}
	return (result * sing);
}
