/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:49:43 by hberger           #+#    #+#             */
/*   Updated: 2019/10/10 15:54:51 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description
**
** La fonction memcpy() copie n octets depuis la zone mémoire src
** vers la zone mémoire dest.
** Les deux zones ne doivent pas se chevaucher.
** Si c'est le cas, utilisez plutôt memmove(3).
*/

#include "./libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*src_cpy;
	char		*dst_cpy;

	if (src == 0 && dst == 0)
		return (0);
	src_cpy = (char*)src;
	dst_cpy = (char*)dst;
	i = 0;
	while (i < n)
	{
		dst_cpy[i] = src_cpy[i];
		i++;
	}
	return (dst);
}
