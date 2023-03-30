#include "ft_list.h"
/*#include <stdio.h>*/

int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}
/*
int	main(void)
{
	t_list	elem3 = {NULL, "data3"};
	t_list	elem2 = {&elem3, "data2"};
	t_list	elem1 = {&elem2, "data1"};
	int		size = ft_list_size(&elem1);

	printf("liste size: %d\n", size);
	return (0);
}
*/
