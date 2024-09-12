/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:21:52 by tdaroca           #+#    #+#             */
/*   Updated: 2023/09/17 11:21:54 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*newNode;
/*
	if (!lst || !f || !(*f) || !del)
		return (0);
*/
	aux = 0;
	while (lst != '\0')
	{
		newNode = ft_lstnew(f(lst->content));
		if (!newNode)
		{
//			lst = lst->next;
			ft_lstclear(&aux, del);
		}
		ft_lstadd_back(&aux, newNode);
//		aux->next = newNode; /*ft_lastadd_back();*/
		lst = lst->next;
	}
	return (aux);
}
