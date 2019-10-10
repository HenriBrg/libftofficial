/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:03:12 by hberger           #+#    #+#             */
/*   Updated: 2019/10/10 10:40:44 by hberger          ###   ########.fr       */
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
	if (s)
		while (*s)
			ft_putchar_fd(*s++, fd);
}
