/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:33:27 by hberger           #+#    #+#             */
/*   Updated: 2019/10/15 17:43:59 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Ajoute l’élément new en tête de la liste.
*/

#include "./libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst == 0 || alst == 0 || new == 0)
		return ;
	new->next = *alst;
	*alst = new;
}
