/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:42:42 by hberger           #+#    #+#             */
/*   Updated: 2019/10/07 17:46:40 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** La fonction memccpy() copie au plus n octets de la zone mémoire src
** vers la zone mémoire dest, s'arrêtant dès qu'elle rencontre
** le caractère c.
** La fonction memccpy() renvoie un pointeur sur le caractère
** immédiatement après c dans la zone dest,
** ou NULL si c n'a pas été trouvé dans les n premiers caractères de src.
*/

#include "../inc/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*src_cpy;
	unsigned char		*dst_cpy;

	if (src == 0 && dst == 0)
		return (0);
	i = 0;
	src_cpy = (unsigned char*)src;
	dst_cpy = (unsigned char*)dst;
	while (i < n)
	{
		dst_cpy[i] = src_cpy[i];
		if (src_cpy[i] == (unsigned char)c)
			return ((char *)dst_cpy + i + 1);
		i++;
	}
	return (NULL);
}
