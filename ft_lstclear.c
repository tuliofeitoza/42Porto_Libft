/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 19:46:58 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/08 02:16:11 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmptmp;

	if (*lst == NULL)
		return ;
	tmp = *lst;
	while (tmp)
	{
		del(tmp->content);
		tmptmp = tmp;
		tmp = tmp->next;
		free(tmptmp);
	}
	*lst = NULL;
}
