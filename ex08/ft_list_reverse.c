/*#include <stdio.h>*/
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*current;
	t_list	*next;

	prev = NULL;
	current = *begin_list;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*begin_list = prev;
}
/*
int	main()
{
	int data1 = 1;
	int data2 = 2;
	int data3 = 3;
	int data4 = 4;

	t_list *elem1 = ft_create_elem(&data1);
	t_list *elem2 = ft_create_elem(&data2);
	t_list *elem3 = ft_create_elem(&data3);
	t_list *elem4 = ft_create_elem(&data4);

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;

	printf("list before: ");
	t_list *current = elem1;
	while (current != NULL)
	{
		printf("%d\n", *(int *)(current->data));
		current = current->next;
	}
	ft_list_reverse(&elem1);

	printf("list after : ");
	current = elem4;
	while (current != NULL)
	{
		printf("%d\n", *(int *)(current->data));
		current = current->next;
	}
	return (0);
}
*/
