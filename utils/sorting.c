#include "../push_swap.h"

//sa 3pb rarb rrarrb sa 3pa

int stack_size(x_list	**stack)
{
	x_list	*head;
	int	count;

	count = 0;
	head = *stack;
	while(head)
	{
		head = head->next;
		count++;
	}
	return(count);
}

int	get_max_bits(x_list **stack)
{
	x_list	*head;
	int		max;
	int		max_bits;
	int aux;

	head = *stack;
	max = head->value;
	max_bits = 0;
	while (head)
	{
		if (head->value > max)
			max = head->value;
		head = head->next;
	}
	aux = 0;
	while ((max >> max_bits) != 0)
	{
		aux = max >> max_bits;
//		printf("%d", aux);
		max_bits++;
	}
	aux = max >> max_bits;
//	printf("%d", aux);
	return (max_bits);
}

// int	get_max_number(x_list **stack)
// {
// 	x_list	*head;
// 	int		max;
// 	int		number_figure;

// 	head = *stack;
// 	max = head->value;
// 	number_figure = 1;
// // get max number from stack
// 	while (head)
// 	{
// 		if (head->value > max)
// 			max = head->value;
// 		head = head->next;
// 	}
// // END
// 	while (max / 10 > 10)
// 	{
// 		max = max / 10;
// 		number_figure++;
// 	}
// 	number_figure++;
// 	return (number_figure);
// }

void	radix_sort(x_list **stack_a, x_list **stack_b)
{
	x_list	*head_a;
	x_list	*head_b;
	int	i;// number figure counter
	int	j;// number of nodes in stack counter
	int max_bits;

	head_a = *stack_a;
	head_b = *stack_b;
//	i = get_max_number(stack_a);
	i = 0; 
	max_bits = get_max_bits(stack_a);
	j = stack_size(stack_a);
//	print_stack(*stack_a);
	while(i < max_bits)
	{
		while(j > 0)
		{
			// if (((head_a->value >> i) & 1) == 1)
			// {	
			// 	push_b(stack_a, stack_b);
			// }
			// else
			// {
			// 	rotate_a(stack_a);
			// }
			head_a = *stack_a;
			if (((head_a->value >> i) & 1) == 1)
			{	
				rotate_a(stack_a);
//				printf("ra\n");
			}
			else
			{
				push_b(stack_a, stack_b);
//				printf("pb\n");
			}
			j--;
		}
//		print_stack_both(*stack_a, *stack_b);
//		print_stack(*stack_a);
		while (*stack_b)
		{
			push_a(stack_b, stack_a);
		}
		j = stack_size(stack_a);
		i++;
		print_stack(*stack_a);
	}
	
//	print_stack_both(*stack_a, *stack_b);

}
