/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:56:37 by hberger           #+#    #+#             */
/*   Updated: 2019/10/07 17:48:52 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** The strnstr() function locates the first occurrence of the null-termi-
** nated string needle in the string haystack, where not more than len char-
** acters are searched.  Characters that appear after a `\0' character are
** not searched.
**
** If needle is an empty string, haystack is returned; if needle occurs
** nowhere in haystack, NULL is returned; otherwise a pointer to the first
** character of the first occurrence of needle is returned.
*/

#include "../inc/libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;

	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	i = -1;
	while (++i < len)
		if (ft_strncmp((char *)&str[i], (char *)to_find,
			ft_strlen(to_find) - 1) == 0)
		{
			if (i + ft_strlen(to_find) > len)
				return (NULL);
			return ((char *)&str[i]);
		}
	return (NULL);
}
