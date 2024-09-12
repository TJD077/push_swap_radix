/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:46:51 by tdaroca           #+#    #+#             */
/*   Updated: 2023/09/13 09:46:52 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//#include "libft.h"

int	ft_lstsize_push_swap(x_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while ((*lst).next != NULL)
	{
		lst = lst->next;
		i++;
	}
	i++;
//	printf("%d", i);
	return (i);
}
/*
int main()
{
    x_list	*firstNode;
    x_list	*secondNode;
    x_list  *thirdNode;
    x_list	*fourthNode;
	x_list	*fithNode = 0;

    firstNode = ft_lstnew("1");
    secondNode = ft_lstnew("2");
	thirdNode = ft_lstnew("3");
	fourthNode = ft_lstnew("4");
	firstNode->next = secondNode;
	secondNode->next = thirdNode;
	thirdNode->next = fourthNode;
    printf("%d", ft_lstsize(fithNode));

}
*/