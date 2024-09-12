/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:01:49 by tdaroca           #+#    #+#             */
/*   Updated: 2023/09/06 11:01:52 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//#include "libft.h"

x_list	*ft_lstnew_push_swap(int content)
{
	x_list	*node;

	node = malloc(sizeof(x_list));
	if (!node)
		return (0);
//	(*node).content = content;
	node->value = content;
	node->next = NULL;
	printf("%d\n", content);
//	printf("%d\n", *(int*)(node->content));
//	printf("%d\n", *(int*)(content));
	return (node);
}
/*
int	main(void)
{
	// int *content;

	// content = malloc(sizeof(int));
	// *content = 7;
	// printf("%d\n", *content);
	// ft_lstnew(content);
	ft_lstnew("hellothere");
}
*/