/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:10:36 by tdaroca           #+#    #+#             */
/*   Updated: 2023/09/13 11:10:37 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//#include "libft.h"
/*recibe puntero al primer nodo de la lista*/
x_list	*ft_lstlast_push_swap(x_list *lst)
{
	x_list	*aux;

	if (!lst)
		return (0);
	aux = lst;
	while ((*aux).next != NULL)
		aux = aux->next;
	return (aux);
}
/*
int main()
{
    x_list	*firstNode;
    x_list	*secondNode;
    x_list  *thirdNode;
//    x_list	*fourthNode;
	x_list 	*lastNode;

    firstNode = ft_lstnew("1");
    secondNode = ft_lstnew("2");
	thirdNode = ft_lstnew("3");
//	fourthNode = ft_lstnew("4");
	firstNode->next = secondNode;
	secondNode->next = thirdNode;
//	thirdNode->next = fourthNode;
	lastNode = ft_lstlast(firstNode);
    printf("%s", (*lastNode).content);
}
*/