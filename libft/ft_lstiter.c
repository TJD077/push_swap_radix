/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:18:27 by tdaroca           #+#    #+#             */
/*   Updated: 2023/09/17 11:18:28 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst) /*pq  no hace falta proteger f*/
		return ;
	while (lst->next != '\0')
	{
		f(lst->content);
		lst = lst->next;
	}
	f(lst->content);
}
