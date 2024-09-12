/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:37:00 by tdaroca           #+#    #+#             */
/*   Updated: 2023/09/13 12:37:01 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

//	if (!lst || !(*lst))
//		return ;
	aux = *lst;
	while (*lst)
	{
		*lst = aux->next;
		del(aux->content);
		free(aux);/* estas dos lineas es el ft_lstdelone.c */
		aux = *lst;
	}
}

/*
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list	*aux;

	aux = *lst;
    while(aux)
    {
		aux = aux->next;
		del((*lst)->content);
		free(*lst);
		*lst = aux;
	}
	*lst = 0;
}
*/