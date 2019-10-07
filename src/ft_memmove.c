/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:45:11 by hberger           #+#    #+#             */
/*   Updated: 2019/10/07 18:40:33 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** La fonction memmove() copie n octets depuis la zone mémoire
** src vers la zone mémoire dest.
** Les deux zones peuvent se chevaucher : la copie se passe comme si
** les octets de src étaient d'abord copiés dans une zone temporaire
** qui ne chevauche ni src ni dest, et les octets sont ensuite
** copiés de la zone temporaire vers dest.
*/

#include "../inc/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*src_cpy;
	char	*dst_cpy;

	if (src == dst)
		return (dst);
	src_cpy = (char*)src;
	dst_cpy = (char*)dst;
	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dst_cpy[i] = src_cpy[i];
		}
	}
	else
	{
		i = -1;
		while (++i < len)
			dst_cpy[i] = src_cpy[i];
	}
	return (dst);
}
