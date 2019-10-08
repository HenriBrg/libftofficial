/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:14:42 by hberger           #+#    #+#             */
/*   Updated: 2019/10/08 12:06:25 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_lstsize(t_list *lst)
{
	int			i;
	t_list		*current;

	if (lst == 0)
		return (0);
	i = 0;
	current = lst;
	while (current != 0)
	{
		i++;
		current = current->next;
	}
	return (i);
}
