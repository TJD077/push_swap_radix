# include "./push_swap.h"
//# include "libft/libft.h"

//bash vs zsh : número de argumentos, se cogen de forma individual o conjunta 
//variables de shell¿? ARG
//funcion de orden

int	needsSorting(x_list	*stack)
{
	x_list	*head;
	head = stack;
	while (head->next != NULL)
	{
		if (head->value > head->next->value)
			return (1);
		head = head->next;
	}
	return (0);
}

void	ft_leaks(void)
{
	system("leaks a.out");
}

int	main(int argc, char	**argv)
{
	char	*argument;
	char	**aux;/*for printing*/
	x_list	*stack_a;
	x_list	*stack_b;
	int	i;
	int	j;

	atexit(ft_leaks);
	argument = NULL;
	if (check_args(argc, argv, &argument))
	{
// 		stack_a = malloc(sizeof(x_list));
// 		stack_b = malloc(sizeof(x_list));
		stack_a = NULL;
		stack_b = NULL;
		i = 0;
		j = 0;
		aux = &argument;
		while(aux[i] != NULL)
		{
			while(aux[i][j] != '\0')
			{
				printf("%c", aux[i][j]);
				j++;
			}
			printf(" from main\n");
			i++;
		}

		// while(aux[i] != NULL)
		// {
		// 	printf("%s", aux[i]);
		// 	i++;
		// }

		stack_maker(&stack_a, &argument);
		/*¿está ordenada?*/
		if (!needsSorting(stack_a))
			return (0);
//		radix_sort(&stack_a, &stack_b);
//		return (1); /*causes  error, WHY*/
	}
	return (0);
}




// ejemplo subject
	// print_stack(stack_a);
	// print_stack(stack_b);

	// swap(&stack_a);
	// push(&stack_a, &stack_b);
	// push(&stack_a, &stack_b);
	// push(&stack_a, &stack_b);
	// rotate(&stack_a);
	// rotate(&stack_b);
	// reverse_rotate(&stack_a);
	// reverse_rotate(&stack_b);
	// swap(&stack_a);
	// push(&stack_b, &stack_a);
	// push(&stack_b, &stack_a);
	// push(&stack_b, &stack_a);
	
	// print_stack(stack_a);
	// print_stack(stack_b);