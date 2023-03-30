#include "ft_list.h"
#include <stdlib.h>
/*#include <stdio.h>*/

void	ft_list_clear(t_list **begin_list)
{
	t_list	*current;
	t_list	*next;

	current = *begin_list;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*begin_list = NULL;
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

	ft_list_clear(&list);

	if (list == NULL)
	{
		printf("list empty\n");
	}
	else
	{
		printf("list not empty\n");
	}
	return (0);
}
*/
