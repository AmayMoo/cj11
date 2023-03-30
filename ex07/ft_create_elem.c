#include "ft_list.h"
#include <stdlib.h>
/*#include <stdio.h>*/

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(t_list));
	if (new_elem == NULL)
	{
		return (NULL);
	}
	(*new_elem).next = NULL;
	new_elem->data = data;
	return (new_elem);
}
/*
int	main(void)
{
	int		data;
	t_list	*elem;

	data = 50;
	elem = ft_create_elem(&data);
	if (elem != NULL)
	{
		printf("data: %d\n", *(int *)(elem->data));
		printf("next: %p\n", elem->next);
	}
	return (0);
}
*/
