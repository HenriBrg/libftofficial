/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:59:06 by hberger           #+#    #+#             */
/*   Updated: 2019/10/10 15:54:04 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** La fonction strchr() renvoie un pointeur sur la première
** occurrence du caractère c dans la chaîne s.
*/

#include "./libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char*)s);
}
