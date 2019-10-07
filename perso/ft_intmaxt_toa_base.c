
/*
**              <----- Description ----->
**
** La fonction ft_intmaxt_toa_base() converti un intmax_t
** en une base donnée en paramètre et le met dans un string
*/

#include "./libft.h"

char *ft_intmaxt_toa_base(char *base, intmax_t n)
{
  int neg;
  int size;
  char *str;
  intmax_t nb;

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
