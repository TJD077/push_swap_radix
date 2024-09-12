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

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while ((*lst).next != '\0')
		lst = lst->next;
	return (lst);
}
/*
int main()
{
    t_list	*firstNode;
    t_list	*secondNode;
    t_list  *thirdNode;
//    t_list	*fourthNode;
	t_list 	*lastNode;

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