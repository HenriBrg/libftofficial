/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:03:12 by hberger           #+#    #+#             */
/*   Updated: 2019/10/14 22:02:35 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Ecrit la chaine s sur le descripteur de fichier fd.
*/

#include "./libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
			i++;
		write(fd, s, i);
	}
}
