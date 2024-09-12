/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:58:44 by tdaroca           #+#    #+#             */
/*   Updated: 2023/09/13 11:58:45 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//#include "libft.h"

void	ft_lstadd_back_push_swap(x_list **lst, x_list *newNode, size_t index)
{
	x_list	*aux;

	if (!(*lst))
		*lst = newNode;
	else
	{
		aux = ft_lstlast_push_swap(*lst);
		aux->next = newNode;
//		printf("%d\n", ft_lstsize(*lst));
	}
//	newNode->next = NULL;
	newNode->position = index;

}
// void ft_lstadd_back(x_list *lst, x_list *newNode)
// {
//     x_list  **aux;

//     aux = &lst;
//     while((*aux)->next != '\0')
//         *aux = (*aux)->next;
//     (*aux)->next = newNode;
//     return ;
// }

// void ft_lstadd_back(x_list *lst, x_list *newNode)
// {
//     x_list  *aux;

//     aux = lst;
//     while(aux->next != '\0')
//         aux = aux->next;
//     aux->next = newNode;
//     return ;
// }

// void ft_lstadd_back(x_list *lst, x_list *newNode)
// {
//     while(lst->next != '\0')
//         lst = lst->next;
//     lst->next = newNode;
//     return ;
// }

/*
int main()
{
    x_list	*firstNode;
    x_list	*secondNode;
    x_list  *thirdNode;
    x_list	*fourthNode;

    firstNode = ft_lstnewNode("1");
    secondNode = ft_lstnewNode("2");
	thirdNode = ft_lstnewNode("3");
	fourthNode = ft_lstnewNode("4");
	firstNode->next = secondNode;
	secondNode->next = thirdNode;
	thirdNode->next = fourthNode;
//    printf("%d\n", ft_lstsize(firstNode));

    ft_lstadd_back(0, ft_lstnewNode("last"));
//    printf("%d\n", ft_lstsize(firstNode));
}
*/