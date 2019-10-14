/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:56:21 by hberger           #+#    #+#             */
/*   Updated: 2019/10/14 22:13:26 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t		str_len_substr(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static unsigned int	ft_nsize(char const *str, unsigned int start, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n && str[i + start])
		i++;
	return (i);
}

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	size;
	char			*copy;

	if (!s || str_len_substr(s) < (size_t)start)
	{
		copy = malloc(sizeof(char) * 1);
		if (copy == 0)
			return (0);
		*copy = '\0';
		return (copy);
	}
	size = ft_nsize(s, start, len);
	copy = malloc((size + 1));
	if (copy == 0)
		return (0);
	i = -1;
	while (++i < size)
		copy[i] = s[start + i];
	copy[i] = '\0';
	return (copy);
}
