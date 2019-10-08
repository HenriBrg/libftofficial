// # include "./inc/libft.h"
# include "./inc/bonus.h"

#include <stdio.h>

int main()
{
	t_list *first;
	t_list *second;
	t_list *third;
	t_list *fourth;
	t_list *fifth;
	t_list *zero;
	t_list *seven;

	first = ft_lstnew("first");
	second = ft_lstnew("second");
	third = ft_lstnew("third");
	fourth = ft_lstnew("fourth");
	fifth = ft_lstnew("fifth");

	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;

	zero = ft_lstnew("zero");
	seven = ft_lstnew("seven");

	printf("Taille LC avant ajout de zero : %d\n", ft_lstsize(first));
	ft_lstadd_front(&first, zero);
	printf("Taille LC apres ajout de zero : %d\n", ft_lstsize(zero));
	printf("Contenu du dernier maillon : %s\n", (char*)ft_lstlast(zero)->content);
	ft_lstadd_back(&zero, seven);
	printf("Taille LC apres ajout de seven : %d\n", ft_lstsize(zero));
	printf("Contenu du dernier maillon : %s\n", (char*)ft_lstlast(zero)->content);

}


/* List chainées

	t_list *first;
	t_list *second;
	t_list *third;
	t_list *fourth;
	t_list *fifth;
	t_list *zero;
	t_list *seven;

	first = ft_lstnew("first");
	second = ft_lstnew("second");
	third = ft_lstnew("third");
	fourth = ft_lstnew("fourth");
	fifth = ft_lstnew("fifth");

	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;

	zero = ft_lstnew("zero");
	seven = ft_lstnew("seven");

	printf("Taille LC avant ajout de zero : %d\n", ft_lstsize(first));
	ft_lstadd_front(&first, zero);
	printf("Taille LC apres ajout de zero : %d\n", ft_lstsize(zero));
	printf("Contenu du dernier maillon : %s\n", (char*)ft_lstlast(zero)->content);
	ft_lstadd_back(&zero, seven);
	printf("Taille LC apres ajout de seven : %d\n", ft_lstsize(zero));
	printf("Contenu du dernier maillon : %s\n", (char*)ft_lstlast(zero)->content);

*/


/* CALLOC

	char	*perso;
	char	*official;

	perso = (char*)ft_calloc(0, 0);
	official = (char*)calloc(0, 0);

	printf("%s vs %s\n", perso, official);
	return (0);

*/
