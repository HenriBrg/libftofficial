/*
**              <----- Description ----->
**
** ft_itoa_base() reçoit un int (base décimal) en paramètre et converti cet int
** en string en fonction de la base donnée (qui peut être composé de nimportequoi)
** Attention : aucune gestion de la validité de la base n'est faite
*/

#include "libft.h"

char *ft_itoa_base(char *base, int n)
{
  int nb;
  int neg;
  int size;
  char *str;

  nb = n;
  if (nb == -2147483648 || nb == 0)
		return (nb == 0) ? ft_strdup("0") : ft_strdup("-2147483648");
  size = 0;
  while (nb)
  {
    nb = nb / (int)ft_strlen(base); // ATTENTION : sans cast, boucle infinie si nb est < 0
    size++;
  }
  if (n < 0 && size++ && (neg = 1))
		n *= -1;
  if ((str = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
  if (neg == 1)
			str[0] = '-';
  str[size--] = '\0';
  while (n)
  {
    str[size--] = base[n % ft_strlen(base)];
    n = n / ft_strlen(base);
  }
  return (str);
}
