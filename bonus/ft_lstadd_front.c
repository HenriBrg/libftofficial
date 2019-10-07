/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:33:27 by hberger           #+#    #+#             */
/*   Updated: 2019/10/07 18:48:14 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Ajoute l’élément new en tête de la liste.
*/

#include "../inc/libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
