/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 02:42:21 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/06 23:57:01 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strndup(const char *str, size_t len);
static size_t	ft_countword(const char *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	countword;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	countword = ft_countword(s, c);
	words = ft_calloc(countword + 1, sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = -1;
	while (++i < countword)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] != '\0' && s[j] != c)
			j++;
		words[i] = ft_strndup(s, j);
		s += j;
	}
	words[i] = NULL;
	return (words);
}

static char	*ft_strndup(const char *str, size_t len)
{
	size_t	i;
	char	*dup;

	dup = ft_calloc(len + 1, sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static size_t	ft_countword(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str != '\0')
	{
		while (*str == c)
			str++;
		if (*str != '\0')
			count++;
		while (*str != '\0' && *str != c)
			str++;
	}
	return (count);
}

/*
int main()
{
    char **result = ft_split("-Mestre-dos-magos", '-');
    if (result != NULL)
    {
        size_t i = 0;
        while (result[i] != NULL)
        {
            printf("%s\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }
    return 0;
}
*/