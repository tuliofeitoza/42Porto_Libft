/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 08:04:55 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/02 08:15:11 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_n(int n)
{
	int		count;
	long	num;

	count = 1;
	num = n;
	if (n < 0)
	{
		num = -num;
		count++;
	}
	while (num >= 10)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	num;
	int		count;
	char	*str;

	num = n;
	if (n < 0)
		num = -num;
	count = count_n(n);
	str = (char *)malloc(count + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	str[count--] = '\0';
	while (num > 0)
	{
		str[count--] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
