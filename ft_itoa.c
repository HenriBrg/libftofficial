/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:40:49 by hberger           #+#    #+#             */
/*   Updated: 2019/10/14 22:22:57 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**              <----- Description ----->
**
** Alloue et retourne une chaine de caractères "fraiche"
** terminée par un ’\0’ représentant l’entier n passé en
** paramètre. Les nombres négatifs doivent être gérés.
** Si l’allocation échoue, la fonction renvoie NULL.
*/

#include "./libft.h"

static int	get_len(long long int n, int neg)
{
	long long int	mult;
	int				size;

	mult = 10;
	size = 1;
	while (mult <= n)
	{
		mult *= 10;
		size++;
	}
	return (size + neg);
}

char		*ft_itoa(int n)
{
	int				size;
	int				neg;
	long long int	nb;
	char			*result;

	nb = n;
	neg = 0;
	if (nb < 0)
	{
		neg = 1;
		nb = -nb;
	}
	size = get_len(nb, neg);
	result = malloc(sizeof(char) * (size + 1));
	if (result == 0)
		return (0);
	result[size] = '\0';
	while (--size >= 0)
	{
		result[size] = (nb % 10) + 48;
		nb /= 10;
	}
	if (neg)
		result[size + 1] = '-';
	return (result);
}
