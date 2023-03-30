#include "ft_list.h"
/*#include <stdio.h>*/

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;

	new_elem = ft_create_elem(data);
	if (*begin_list == NULL)
	{
		*begin_list = new_elem;
		return ;
	}
	while ((*begin_list)->next)
	{
		begin_list = &(*begin_list)->next;
	}
	(*begin_list)->next = new_elem;
}
/*
int	main(void)
{
	t_list	*list = NULL;
	int		data1 = 10;
	int		data2 = 20;

	ft_list_push_back(&list, &data1);
	ft_list_push_back(&list, &data2);
	printf("data1: %d\n", *(int *)(list->data));
	printf("data2: %d\n", *(int *)(list->next->data));
	return (0);
}
*/
