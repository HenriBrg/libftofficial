/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:00:18 by hberger           #+#    #+#             */
/*   Updated: 2019/10/14 22:03:07 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Affiche l’entier n sur la sortie standard
*/

#include "./libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	sup;
	char		c;
	long long	nnbb;

	sup = 10;
	nnbb = n;
	if (nnbb < 0)
	{
		write(fd, "-", 1);
		nnbb *= -1;
	}
	while (sup <= nnbb)
		sup *= 10;
	sup /= 10;
	while (sup > 0)
	{
		c = ((nnbb - (nnbb % sup)) / sup) + 48;
		write(fd, &c, 1);
		nnbb = nnbb % sup;
		sup /= 10;
	}
}
