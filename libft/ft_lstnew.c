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

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*aux;

	aux = (t_list *)malloc(sizeof(t_list));
	if (!aux)
		return (0);
//	(*aux).content = content;
	aux->content = content;
	aux->next = 0;
//	printf("%s\n", content);
//	printf("%d\n", *(int*)(aux->content));
//	printf("%d\n", *(int*)(content));
	return (aux);
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