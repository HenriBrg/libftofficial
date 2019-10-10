/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:10:19 by hberger           #+#    #+#             */
/*   Updated: 2019/10/10 14:04:38 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *current;

	if (*alst != 0)
	{
		current = *alst;
		while (current->next != 0)
			current = current->next;
		current->next = new;
	}
	else
		*alst = new;
}
