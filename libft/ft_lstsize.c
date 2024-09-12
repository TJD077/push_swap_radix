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

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while ((*lst).next != '\0' )
	{
		lst = lst->next;
		i++;
	}
	i++;
	return (i);
}
/*
int main()
{
    t_list	*firstNode;
    t_list	*secondNode;
    t_list  *thirdNode;
    t_list	*fourthNode;
	t_list	*fithNode = 0;

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