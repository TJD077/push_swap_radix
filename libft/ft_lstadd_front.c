/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:31:21 by tdaroca           #+#    #+#             */
/*   Updated: 2023/09/13 09:31:24 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
//    printf("%p\n", *lst);
	(*new).next = *lst; /* (*lst) es la direccion de memoria del struct */
//    printf("%p\n", new->next);
//    printf("%p\n", new);
	*lst = new;
//   printf("%p\n", *lst);
	return ;
}
/*
int main(void)
{
//    t_list *ptr;
//    t_list newNode;
    t_list *firstNode;

    firstNode = ft_lstnew("el primero de la cadena");
//    ptr = firstNode;
    ft_lstadd_front(&firstNode, ft_lstnew("nodo extra"));
}
*/