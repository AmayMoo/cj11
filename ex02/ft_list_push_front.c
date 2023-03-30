#include "ft_list.h"
/*#include <stdio.h>*/

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_elem;

	new_elem = ft_create_elem(data);
	if (new_elem != NULL)
	{
		new_elem->next = *begin_list;
		*begin_list = new_elem;
	}
}
/*
int	main(void)
{
	t_list	*list = NULL;
	int		data1 = 10;
	int		data2 = 20;

	ft_list_push_front(&list, &data2);
	ft_list_push_front(&list, &data1);
	printf("data1: %d\n", *(int *)(list->data));
	printf("data2: %d\n", *(int *)(list->next->data));
	return (0);
}
*/
