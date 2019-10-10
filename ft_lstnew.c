/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:35:22 by hberger           #+#    #+#             */
/*   Updated: 2019/10/10 16:45:54 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Alloue et retourne un maillon "frais".
** Les champs content et content_size du nouveau maillon sont
** initialisés par copie des paramètres de la fonction.
** Si le paramètre content est nul, le champs content est initialisé
** à NULL et le champs content_size est initialisé à 0 quelque soit
** la valeur du paramètre content_size.
** Le champ next est initialisé à NULL.
** Si l’allocation échoue, la fonction renvoie NULL.
*/

#include "./libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*current;

	if (!(current = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	current->content = content;
	current->next = NULL;
	return (current);
}
