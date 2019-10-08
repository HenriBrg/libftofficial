/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:34:35 by hberger           #+#    #+#             */
/*   Updated: 2019/10/08 10:32:01 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Parcourt la liste lst en appliquant à chaque maillon la fonction f
** et crée une nouvelle liste "fraiche" avec malloc résultant des
** applications successives.
** Si une allocation échoue, la fonction renvoie NULL.
*/

#include "../inc/bonus.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list*))
{
	t_list	*previous;
	t_list	*begin;
	t_list	*current;

	begin = NULL;
	previous = NULL;
	while (lst != NULL)
	{
		current = (*f)(ft_lstnew(lst->content));
		if (current == NULL)
			return (NULL);
		if (begin == NULL)
			begin = current;
		if (previous)
			previous->next = current;
		previous = current;
		lst = lst->next;
	}
	return (begin);
}
