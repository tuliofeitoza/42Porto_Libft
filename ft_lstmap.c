/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 21:39:26 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/05/08 19:22:39 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *list;
    t_list  *tmp;
    t_list  *dm;    
    t_list  *newlist;
    
    if(lst == NULL || f == NULL || del == NULL)
        return (NULL);
    dm = f(lst->content);
    list = NULL;
    tmp = NULL;
    while (lst)
    {
        newlist = ft_lstnew(f(lst->content));
        if (newlist == NULL)
        {
            del(dm);
            return (NULL);
        }
        if (list == NULL)
        {
            list = newlist;
            tmp = list;
        }
        else
        {
            tmp->next = newlist;
            tmp = tmp->next;
        }
        lst = lst->next;
    }
    return (list);
}
