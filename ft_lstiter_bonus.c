/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:34:07 by hberger           #+#    #+#             */
/*   Updated: 2019/10/10 14:06:46 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Parcourt la liste lst en appliquant à chaque maillon la fonction f.
**
** ATTENTION : dans la fonction qui sera passée en paramètre,
** pour modifier le content du maillon (en mémoire), la syntaxe
** est la suivante :   *(char *)(elem->content)
**
** Exemple pour upcase la première lettre du contenu du maillon
** en supposant que c'est un string :
**
**                *(char *)(elem->content) -= 32;
*/

#include "./libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst);
		lst = lst->next;
	}
}
