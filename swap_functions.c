#include "./push_swap.h"

void	print_stack(x_list	*lst)
{
	/*IMPRIME EL content DE TODOS LOS NODOS SALVO EL ÚLTIMO*/
//	printf("\n$$$$$$\n");
//	printf("print ONE stack:\n");
	while (lst != NULL)
	{
		printf("%d\n", lst->value);
		lst = lst->next;
	}
//	printf("$$$$$$\n");
	printf("\n");
}

void	print_stack_both(x_list	*lst_a, x_list	*lst_b)
{
	/*IMPRIME EL content DE TODOS LOS NODOS SALVO EL ÚLTIMO*/
//	printf("\n$$$$$$\n");
//	printf("print BOTH :\n");
	while (lst_a != NULL  || lst_b != NULL)
	{
		if (lst_a)
		{
			printf("%d ", lst_a->value);
			lst_a = lst_a->next;
		}
		if (lst_b)
		{
			printf("%d", lst_b->value);
			lst_b = lst_b->next;
		}
		printf("\n");
		// printf("%d , %d\n", lst_a->value, lst_b->value);
	}
	printf("_ _\na b\n\n");
//	printf("$$$$$$\n");
}

void	print_command_window(x_list	*lst_a, x_list	*lst_b)
{
	while(lst_a || lst_b)
	{
		if(lst_a)
		{	
			printf("%d ", lst_a->value);
			lst_a = lst_a->next;
		}
		if(lst_b)
		{
			printf("%d ", lst_b->value);
			lst_b = lst_b->next;
		}
		printf("\n");
		// printf("%d %d \n", lst_a->value, lst_b->value);
	}
	printf("- - \n");
	printf("a b ");
	printf("\n----------------------------------------\n");
}

// Intercambia los dos primeros elementos del stack. No hace nada si
// hay uno o menos elementos.
static void	swap(x_list	**lst)
{
	x_list	*aux;

	aux = *lst;
	(*lst) = (*lst)->next;
	aux->next = (*lst)->next;
	(*lst)->next = aux;
}
void	swap_a(x_list	**lst_a)
{
	if (ft_lstsize_push_swap(*lst_a) >= 2)
	{
		swap(lst_a);
//		printf("Exec sa:\n");
	}
	else
		printf("only one element in stack a\n");
}

void	swap_b(x_list	**lst_b)
{
	if (ft_lstsize_push_swap(*lst_b) >= 2)
	{
		swap(lst_b);
//		printf("Exec sb:\n");
	}
	else
		printf("only one element in stack b\n");
}
void	ss(x_list	**lst_a, x_list	**lst_b)
{
	if (ft_lstsize_push_swap(*lst_a) >= 2 && ft_lstsize_push_swap(*lst_b))
	{
		swap(lst_a);
		swap(lst_b);
//		printf("Exec sa sb:\n");
	}
	else
		printf("stack a or b has onlly 1 element\n");
}
// Toma el primer elemento del stack b y lo pone el primero en el stack
// a. No hace nada si b está vacío. Y vicerversa.
static void	push(x_list	**lst_giver, x_list	**lst_taker)
{
	x_list	*aux;

	aux = (*lst_giver);
	(*lst_giver) = (*lst_giver)->next;
	ft_lstadd_front_push_swap(lst_taker, aux);
}
void	push_a(x_list	**lst_b, x_list	**lst_a)
{
	if (!(*lst_b))
		printf("stack b is empty, no node to push\n");
	else
	{
		push(lst_b, lst_a);
//		printf("Exec push_a:\n");
	}
}
void	push_b(x_list	**lst_a, x_list	**lst_b)
{
	if (!(*lst_a))
		printf("stack b is empty, no node to push\n");
	else
	{
		push(lst_a, lst_b);
//		printf("Exec push_b:\n");
	}
}
// Desplaza hacia arriba todos los elementos del stack a una posición,
// de forma que el primer elemento se convierte en el último.
static void	rotate(x_list	**lst)
{
	size_t	i;
	x_list	*aux;

	i = ft_lstsize_push_swap(*lst);
	aux = *lst;
	*lst = (*lst)->next;
	ft_lstadd_back_push_swap(lst, aux, i - 1);
	aux->next = NULL;
}
void	rotate_a(x_list	**lst_a)
{
	if (!(*lst_a))
		printf("stack a is empty, nothing to rotate\n");
	else
	{
		rotate(lst_a);
//		printf("Exec rotate_a:\n");
	}
}
void	rotate_b(x_list	**lst_b)
{
	if (!(*lst_b))
		printf("stack b is empty, nothing to rotate\n");
	else
	{
		rotate(lst_b);
//		printf("Exec rotate_b:\n");
	}
}
void	rotate_ab(x_list	**lst_a,x_list	**lst_b)
{
	if (!(*lst_b))
		printf("stack b is empty, nothing to rotate\n");
	else
	{
		rotate(lst_a);
		rotate(lst_b);
//		printf("Exec rotate_a rotate_b:\n");	
	}
}
// Desplaza hacia abajo todos los elementos del stack a una
// posición, de forma que el último elemento se convierte en el primero.
static void	reverse_rotate(x_list	**lst)
{
	x_list	*aux;
	x_list	*last_node;

	last_node = ft_lstlast_push_swap(*lst);
	aux = *lst;
	while (aux->next->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = NULL;
	ft_lstadd_front_push_swap(lst, last_node);
}
void	reverse_rotate_a(x_list	**lst_a)
{
	if (!(*lst_a))
		printf("stack a is empty, nothing to rotate\n");
	else
	{
		reverse_rotate(lst_a);
//		printf("Exec reverse_rotate_b:\n");
	}
}
void	reverse_rotate_b(x_list	**lst_b)
{
	if (!(*lst_b))
		printf("stack b is empty, nothing to rotate\n");
	else
	{
		reverse_rotate(lst_b);
//		printf("Exec reverse_rotate_b:\n");
	}
}
void	reverse_rotate_ab(x_list	**lst_a,x_list	**lst_b)
{
	if (!(*lst_b))
		printf("stack b is empty, nothing to rotate\n");
	else
	{
		reverse_rotate(lst_a);
		reverse_rotate(lst_b);
//		printf("Exec reverse_rotate_a reverse_rotate_b:\n");
	}
}