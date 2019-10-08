/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:35:22 by hberger           #+#    #+#             */
/*   Updated: 2019/10/08 12:10:08 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Alloue et retourne un maillon "frais".
** Les champs content et content_size du nouveau maillon sont
** initialisés par copie des paramètres de la fonction.
** Si le paramètre content est nul, le champs content est initialisé
** à NULL et le champs content_size est initialisé à 0 quelque soit
** la valeur du paramètre content_size.
** Le champ next est initialisé à NULL.
** Si l’allocation échoue, la fonction renvoie NULL.
*/

#include "../inc/libft.h"

static char	*my_strdup(const char *src)
{
	int		i;
	char	*output;

	i = 0;
	while (src[i] != '\0')
		i++;
	if ((output = malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		output[i] = src[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}

t_list		*ft_lstnew(void const *content)
{
	t_list	*current;

	if ((current = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
		current->content = NULL;
	else
		current->content = my_strdup((char*)content);
	current->next = NULL;
	return (current);
}
