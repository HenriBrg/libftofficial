/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:48:22 by hberger           #+#    #+#             */
/*   Updated: 2019/10/10 10:40:23 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** La fonction memcmp() compare les n premiers octets des zones
** mémoire s1 et s2. Elle renvoie un entier inférieur, égal, ou
** supérieur à zéro, si s1 est respectivement inférieure, égale ou
** supérieur à s2.
** La fonction memcmp() renvoie un entier négatif, nul ou positif
** si les n premiers octets de s1 sont respectivement inférieurs,
** égaux ou supérieurs aux n premiers octets de s2.
*/

#include "./libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	if (s1 == NULL && s2 == NULL)
		return (0);
	i = 0;
	s1_cpy = (unsigned char *)s1;
	s2_cpy = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_cpy[i] != s2_cpy[i])
			return (s1_cpy[i] - s2_cpy[i]);
		i++;
	}
	return (0);
}
