/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:49:05 by hberger           #+#    #+#             */
/*   Updated: 2019/10/08 09:17:42 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int		check(char const *set, char c)
{
	int i;

	i = -1;
	while (set[++i] != '\0')
		if (set[i] == c)
			return (1);
	return (0);
}

static int		start(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (check(set, s1[i]))
		i++;
	return (i);
}

static int		end(char const *s1, char const *set)
{
	int i;
	int x;

	x = 0;
	i = strlen(s1);
	while (check(set, s1[--i]))
		x++;
	return (x);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		x;
	size_t		size;
	char		*output;

	size = strlen(s1);
	if (size == 0)
		return (0);
	x = start(s1, set);
	size = size - x - end(s1, set);
	if (!(output = (char*)malloc(sizeof(char) * size)))
		return (0);
	i = -1;
	while (++i < size)
		output[i] = s1[x + i];
	return (output);
}
