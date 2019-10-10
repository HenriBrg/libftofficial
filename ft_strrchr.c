/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:57:30 by hberger           #+#    #+#             */
/*   Updated: 2019/10/10 10:41:40 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** La fonction strrchr() renvoie un pointeur sur la dernière
** occurrence du caractère c dans la chaîne s
*/

#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	if (ft_strchr(s, c) == NULL)
		return (NULL);
	while (*s)
		s++;
	while (*s != c)
		s--;
	return ((char*)s);
}
