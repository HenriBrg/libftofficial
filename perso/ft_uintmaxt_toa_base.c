/*
**              <----- Description ----->
**
** La fonction ft_Uintmaxt_toa_base() converti un uintmax_t
** en une base donnée en paramètre et le met dans un string
** Attention : ne pas confondre avec ft_intmaxt_toa_base()
*/

#include "./libft.h"

char *ft_uintmaxt_toa_base(char *base, uintmax_t n)
{
  unsigned int size;
  char *str;
  uintmax_t nb;

  nb = n;
  if (nb == 0)
		return (ft_strdup("0"));
  size = 0;
  while (nb)
  {
    nb = nb / ft_strlen(base);
    size++;
  }
  if ((str = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
  str[size--] = '\0';
  while (n)
  {
    str[size--] = base[n % ft_strlen(base)];
    n = n / ft_strlen(base);
  }
  return (str);
}
