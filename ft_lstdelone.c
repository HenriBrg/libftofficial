/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:34:05 by hberger           #+#    #+#             */
/*   Updated: 2019/10/10 13:42:23 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Prend en paramètre l’adresse d’un pointeur sur un maillon et libère
** la mémoire du contenu de ce maillon avec la fonction del passée en
** paramètre puis libère la mémoire du maillon en lui même avec free(3).
**
** La mémoire du champ next ne doit en aucun cas être libérée.
** Pour terminer, le pointeur sur le maillon maintenant libéré doit être
** mis à NULL (de manière similaire à la fonction ft_memdel
** de la partie obligatoire).
*/

#include "./libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
