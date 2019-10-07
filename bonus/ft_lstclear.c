/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:33:53 by hberger           #+#    #+#             */
/*   Updated: 2019/10/07 18:55:26 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Prend en paramètre l’adresse d’un pointeur sur un maillon et libère
** la mémoire de ce maillon et celle de tous ses successeurs l’un après
** l’autre avec del et free(3). Pour terminer, le pointeur sur le premier
** maillon maintenant libéré doit être mis à NULL (de manière similaire à
** la fonction ft_memdel de la partie obligatoire).
**
** Exemple de fonction de suppression :
**
** void del(void *data, size_t size)
** {
**  free(data);
** }
*/

#include "../inc/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
