/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:56:21 by hberger           #+#    #+#             */
/*   Updated: 2019/10/12 14:29:49 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static char	*ft_strnew(size_t size)
{
	return (char *)ft_calloc(1, sizeof(char) * (size + 1));
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*res;

	s_len = ft_strlen(s);
	if (s_len < start)
	{
		if (!(res = malloc(1)))
			return (NULL);
		res[0] = '\0';
	}
	else
	{
		if (!(res = ft_strnew(len)))
			return (NULL);
		i = 0;
		while (i < len)
			res[i++] = s[start++];
	}
	return (res);
}
