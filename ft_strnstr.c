/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 23:34:44 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/04/24 20:16:27 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((!big || !little) && len == 0)
		return (NULL);
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && i + j < len)
			j++;
		if (little[j] == 0)
			return ((char *)big + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*i;
	const char	*j;
	size_t		o;

    i = "Brac tond mak";
    j = "tond";
    o = 10;
    
    printf("%s\n", ft_strnstr(i, j, o));
    printf("%s" , strstr(i, j));
}
*/