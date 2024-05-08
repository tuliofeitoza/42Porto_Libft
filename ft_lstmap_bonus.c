/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 21:39:26 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/08 22:15:42 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*newlist;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	list = NULL;
	while (lst)
	{
		newlist = ft_lstnew_bonus(f(lst->content));
		if (newlist == NULL)
		{
			ft_lstclear_bonus(&list, del);
			return (NULL);
		}
		ft_lstadd_back_bonus(&list, newlist);
		lst = lst->next;
	}
	return (list);
}
