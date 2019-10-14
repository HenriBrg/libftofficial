/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:49:05 by hberger           #+#    #+#             */
/*   Updated: 2019/10/14 22:32:09 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	len_get(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	ft_is_in_set(char c, char const *set)
{
	int i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

static int	total_len(char const *s1, char const *set)
{
	int i;
	int j;
	int soustract;

	i = -1;
	soustract = 0;
	while (s1[++i] && ft_is_in_set(s1[i], set))
		soustract++;
	j = len_get(s1);
	while (s1[--j] && ft_is_in_set(s1[j], set) && j > i)
		soustract++;
	return (soustract);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	char	*new;

	i = -1;
	size = len_get(s1) - total_len(s1, set) + 1;
	new = malloc(sizeof(char) * size);
	if (new == 0)
		return (0);
	while (ft_is_in_set(*s1, set))
		s1++;
	size--;
	while (++i < size)
		new[i] = s1[i];
	new[i] = '\0';
	return (new);
}
