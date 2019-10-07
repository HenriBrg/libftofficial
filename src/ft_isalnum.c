/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:33:32 by hberger           #+#    #+#             */
/*   Updated: 2019/10/07 17:44:07 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** isalnum() vérifie si l'on a un caractère alphanumérique.
** C'est équivalent à (isalpha(c) || isdigit(c)).
*/

int		ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') ||
		(c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
