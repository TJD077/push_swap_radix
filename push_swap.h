/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:59:54 by tdaroca           #+#    #+#             */
/*   Updated: 2023/11/13 10:00:01 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H 
/*
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h> 
*/
# include "libft/libft.h"

typedef struct s_list
{
	int				value;
	int				pseudo_value;
	int				position;
	struct s_list	*next;
}					x_list;

// lst_utils
void	ft_lstadd_back_push_swap(x_list **lst, x_list *new, size_t index);
void	ft_lstadd_front_push_swap(x_list **lst, x_list *new);
//void	ft_lstclear(x_list **lst, void (*del)(int*)); /*void (*del)(void *)*/
//void	ft_lstdelone(x_list *lst, void (*del)(int*)); /*void (*del)(void *)*/
//void	ft_lstiter(x_list *lst, void (*f)(int *));
x_list	*ft_lstlast_push_swap(x_list *lst);
//x_list	*ft_lstmap_modified(x_list *lst, void *(*f)(int *), void (*del)(int *));
x_list	*ft_lstnew_push_swap(int content);
int	ft_lstsize_push_swap(x_list *lst);

// sorting
int	get_max_bits(x_list **stack);
void	radix_sort(x_list **stack_a, x_list **stack_b);
// int	get_max_number(x_list **stack);

// utils
int	check_args(int	argc, char	**argv, char	**argument);
char	**split2(char *s, char c);
int	atoi2(const char *str);
void	stack_maker(x_list **lst, char	**argv);

// PUSH SWAP OPEATIONS

void	print_stack(x_list	*lst);
void	print_stack_both(x_list	*lst_a, x_list	*lst_b);
void	print_command_window(x_list	*lst_a, x_list	*lst_b);

//static void	swap(x_list	**lst);
void	swap_a(x_list	**lst_a);
void	swap_b(x_list	**lst_b);
//void	ss(x_list	**lst_a, x_list	**lst_b);

//static void	push(x_list	**lst, x_list	**lst2);
void	push_a(x_list	**lst_b, x_list	**lst_a);
void	push_b(x_list	**lst_a, x_list	**lst_b);

//static void	rotate(x_list	**lst);
void	rotate_a(x_list	**lst_a);
void	rotate_b(x_list	**lst_b);
//void	rotate_ab(x_list	**lst_a,x_list	**lst_b);

//static void	reverse_rotate(x_list	**lst);
void	reverse_rotate_a(x_list	**lst_a);
void	reverse_rotate_b(x_list	**lst_b);
//void	reverse_rotate_ab(x_list	**lst_a,x_list	**lst_b);

# endif
