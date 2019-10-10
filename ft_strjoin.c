/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:59:22 by hberger           #+#    #+#             */
/*   Updated: 2019/10/10 10:40:59 by hberger          ###   ########.fr       */
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

static char		*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	if (s1 == 0 || s2 == 0 ||
		(!(s = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1)))))
		return (0);
	s[0] = '\0';
	ft_strcat(s, s1);
	ft_strcat(s, s2);
	return (s);
}
