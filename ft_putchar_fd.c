/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:04:42 by hberger           #+#    #+#             */
/*   Updated: 2019/10/10 10:40:35 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Ecrit le caractère c sur le descripteur de fichier fd.
*/

#include "./libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
