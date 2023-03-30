#include "ft_list.h"
/*#include <stdio.h>*/

t_list	*ft_list_last(t_list *begin_list)
{
	while ((begin_list != NULL) && begin_list->next)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}
/*
int	main(void)
{
	t_list	elem3 = {NULL, "data3"};
	t_list	elem2 = {&elem3, "data2"};
	t_list	elem1 = {&elem2, "data1"};
	t_list	*list = &elem1;
	t_list	*last = ft_list_last(list);

	if (last != NULL)
	{
		printf("last: %s\n", (char *)last->data);
	}
	return (0);
}
*/
