#include "ft_list.h"
/*#include <stdio.h>
#include <stdlib.h>*/

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*current;
	unsigned int	i;

	current = begin_list;
	i = 0;
	while ((current != NULL) && i < nbr)
	{
		current = current->next;
		i++;
	}
	return (current);
}
/*
int	main(void)
{
	t_list  *list;
	t_list  *elem1;
	t_list  *elem2;
	t_list  *elem3;

	elem1 = ft_create_elem("Hello");
	elem2 = ft_create_elem("Bonjour");
	elem3 = ft_create_elem("Hola");

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	list = elem1;

	printf("Element 1 : %s\n", (char*)ft_list_at(list, 0)->data);
	printf("Element 2 : %s\n", (char*)ft_list_at(list, 1)->data);
	printf("Element 3 : %s\n", (char*)ft_list_at(list, 2)->data);
    
	t_list *elem;
	elem = ft_list_at(list, 3);
	if (elem == NULL)
	{
		printf("Element 4 : NULL\n");
	}
	else
	{
		printf("Element 4 : %s\n", (char*)elem->data);
	}
	return (0);
}
*/
