/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:57:27 by hberger           #+#    #+#             */
/*   Updated: 2019/10/14 22:12:27 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Applique la fonction f à chaque caractère de la chaine
** de caractères passée en paramètre en précisant son
** index pour créer une nouvelle chaine "fraiche" (avec malloc)
** résultant des applications successives de f
*/

#include "./libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	result = malloc(sizeof(char) * (i + 1));
	if (result == 0)
		return (0);
	i = -1;
	while (s[++i])
		result[i] = (*f)(i, s[i]);
	result[i] = '\0';
	return (result);
}
