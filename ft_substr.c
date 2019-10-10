/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:56:21 by hberger           #+#    #+#             */
/*   Updated: 2019/10/10 14:48:18 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;

	if (start > ft_strlen(s))
		return (NULL);
	if (s == 0 || (output = (char*)malloc(sizeof(char) * (len + 1))) == 0)
		return (0);
	output = ft_memcpy(output, s + start, len);
	output[len] = '\0';
	return (output);
}
