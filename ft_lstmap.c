/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:34:35 by hberger           #+#    #+#             */
/*   Updated: 2019/10/11 18:08:04 by hberger          ###   ########.fr       */
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

#include "./libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*previous;
	t_list	*begin;
	t_list	*current;

	begin = NULL;
	previous = NULL;
	if (f == 0)
		return (NULL);
	while (lst != NULL)
	{
		current = ft_lstnew(f(lst->content));
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
