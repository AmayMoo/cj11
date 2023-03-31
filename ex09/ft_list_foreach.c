/*#include <stdio.h>*/
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*current;

	current = begin_list;
	while (current != NULL)
	{
		(*f)(current->data);
		current = current->next;
	}
}
/*
void	print_int_data(void *data)
{
	int value;

	value = *(int *)data;
	printf("%d (mult by 2) : %d\n", value, value*2);
}

int	main()
{

	int	data1 = 1;
	int	data2 = 2;
	int	data3 = 3;
	int	data4 = 4;

	t_list *elem1 = ft_create_elem(&data1);
	t_list *elem2 = ft_create_elem(&data2);
	t_list *elem3 = ft_create_elem(&data3);
	t_list *elem4 = ft_create_elem(&data4);

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	printf("list: \n");
	ft_list_foreach(elem1, &print_int_data);
    return (0);
}
*/
