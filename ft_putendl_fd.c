/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:03:16 by hberger           #+#    #+#             */
/*   Updated: 2019/10/14 22:01:32 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Ecrit la chaine s sur le descripteur de fichier fd suivi d’un '\n'.
*/

#include "./libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int i;

	i = -1;
	while (s[++i])
		write(fd, s + i, 1);
	write(fd, "\n", 1);
}
