/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:34:35 by hberger           #+#    #+#             */
/*   Updated: 2019/10/15 17:43:41 by hberger          ###   ########.fr       */
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
	t_list	*begin;
	t_list	*current;

	if (!lst)
		return (NULL);
	current = ft_lstnew(f(lst->content));
	begin = current;
	while (lst->next != NULL)
	{
		lst = lst->next;
		current->next = ft_lstnew(f(lst->content));
		current = current->next;
	}
	return (begin);
}
