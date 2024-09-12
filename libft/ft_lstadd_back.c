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

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (lst)
	{
		if (!(*lst))
			*lst = new;
		else
		{
			ptr = ft_lstlast(*lst);
			ptr->next = new;
//			printf("%d\n", ft_lstsize(*lst));
		}
	}
}
// void ft_lstadd_back(t_list *lst, t_list *new)
// {
//     t_list  **ptr;

//     ptr = &lst;
//     while((*ptr)->next != '\0')
//         *ptr = (*ptr)->next;
//     (*ptr)->next = new;
//     return ;
// }

// void ft_lstadd_back(t_list *lst, t_list *new)
// {
//     t_list  *ptr;

//     ptr = lst;
//     while(ptr->next != '\0')
//         ptr = ptr->next;
//     ptr->next = new;
//     return ;
// }

// void ft_lstadd_back(t_list *lst, t_list *new)
// {
//     while(lst->next != '\0')
//         lst = lst->next;
//     lst->next = new;
//     return ;
// }

/*
int main()
{
    t_list	*firstNode;
    t_list	*secondNode;
    t_list  *thirdNode;
    t_list	*fourthNode;

    firstNode = ft_lstnew("1");
    secondNode = ft_lstnew("2");
	thirdNode = ft_lstnew("3");
	fourthNode = ft_lstnew("4");
	firstNode->next = secondNode;
	secondNode->next = thirdNode;
	thirdNode->next = fourthNode;
//    printf("%d\n", ft_lstsize(firstNode));

    ft_lstadd_back(0, ft_lstnew("last"));
//    printf("%d\n", ft_lstsize(firstNode));
}
*/