/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:44:46 by tdaroca           #+#    #+#             */
/*   Updated: 2023/09/17 10:44:47 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
//	printf("%p\n", lst);
	del(lst->content);
//	printf("%p\n", lst->next);
//    printf("%p\n", &lst);
	free(lst);
//    printf("%p\n", lst);
}
/*
int main()
{
    t_list  *node1;
	void	*del;

	(*del) = "1";
    node1 = ft_lstnew("hola");
	ft_lstdelone(node1, del);
}
*/