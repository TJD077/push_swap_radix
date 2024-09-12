#include "../push_swap.h"
/*
void	nodeDeleter(x_list node)
{
	free(node);
}
*/
void	write_new_order(x_list	**lst)
{
	x_list	*ptr;
	int	order;

	order = 0;
	ptr = *lst;
	while (ptr != NULL)
	{
		ptr->position = order;
		order++;
		ptr = ptr->next;
	}
}
// es necesario argc ????
void	stack_maker(x_list **lst, char	**argument)
{
//	char	**argument;
	size_t	i;
	x_list	*newNode;

//	argument = split2(argv[1], ' ');

	i = 0;
	//	lst = &(newNode);
	// while(argument[i])
	// {
	// 	printf("%c", argument[i]);
	// 	i++;
	// }
	while (argument[i] != NULL)
	{
//		printf("%zu  ", i);
		newNode = ft_lstnew_push_swap(atoi2(argument[i]));
		ft_lstadd_back_push_swap(lst, newNode, i);
		i++;
	}
//	printf("\n");
	ft_lstsize_push_swap(*lst);

//	print_stack(*lst);
//	printf("\n%d\n", ft_lstsize(*lst));
//	return (*lst);
//		printf("\n%d\n", ft_strlen(*argument));
}