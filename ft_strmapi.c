/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:57:27 by hberger           #+#    #+#             */
/*   Updated: 2019/10/12 14:23:21 by hberger          ###   ########.fr       */
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
	char			*output;
	unsigned int	i;

	if (s == 0 || f == 0 || (output = (char*)ft_calloc(1, ft_strlen(s))) == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		output[i] = f(i, s[i]);
		i++;
	}
	return (output);
}
