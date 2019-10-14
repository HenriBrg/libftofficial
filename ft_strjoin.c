/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:59:22 by hberger           #+#    #+#             */
/*   Updated: 2019/10/14 22:10:36 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Alloue et retourne une chaine de caractères "fraiche"
** terminée par un '\0' résultant de la concaténation
** de s1 et s2.
** Si l’allocation echoue, la fonction renvoie NULL.
*/

#include "./libft.h"

static int		ft_lll(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s3;

	s3 = malloc(sizeof(char) * (ft_lll(s1) + ft_lll(s2) + 1));
	if (s3 == 0)
		return (0);
	j = -1;
	i = -1;
	while (s1[++i])
		s3[++j] = s1[i];
	i = -1;
	while (s2[++i])
		s3[++j] = s2[i];
	s3[++j] = '\0';
	return (s3);
}
