#include "ft_list.h"
/*#include <stdio.h>*/

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*elem;
	int		i;

	list = NULL;
	i = 0;
	while (i < ac && av[i])
	{
		elem = ft_create_elem(av[i]);
		elem->next = list;
		list = elem;
		i++;
	}
	return (list);
}
/*
int	main(void)
{
	char	*args[] = {"arg1", "arg2", "arg3", "arg4", "arg5", NULL};
	int		ac = 5;

	t_list	*list = ft_list_push_params(ac, args);
	t_list	*current = list;

	while (current != NULL)
	{
		printf("%s\n", (char *)current->data);
		current = current->next;
	}
	return (0);
}
*/
