/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:39:08 by hberger           #+#    #+#             */
/*   Updated: 2019/10/07 18:45:26 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Alloue et retourne une copie de la chaine passée en paramètre
** sans les espaces blancs au debut et à la fin de cette chaine.
** On considère comme espaces blancs
** les caractères ’ ’, ’\n’ et ’\t’.
** Si s ne contient pas d’espaces blancs au début ou à la fin,
** la fonction renvoie une copie de s.
** Si l’allocation echoue, la fonction renvoie NULL.
*/

#include "../inc/libft.h"

static char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static int		size(size_t length, size_t start, size_t end)
{
	int	i;

	i = (length - (length - (length - start)));
	i -= (length - (length - (length - end)));
	return (i + 1);
}

char			*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		end;
	size_t		start;
	char		*output;

	if (s == 0)
		return (0);
	i = 0;
	start = 0;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		i++;
		start++;
	}
	if (s[i] == '\0')
		return (0);
	end = ft_strlen(s) - 1;
	while (end >= 0 && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
		end--;
	if (!(output = malloc(sizeof(char) *
			size(ft_strlen(s), start, end) + 1)))
		return (0);
	ft_strncpy(output, s + start, size(ft_strlen(s), start, end));
	output[size(ft_strlen(s), start, end)] = '\0';
	return (output);
}
