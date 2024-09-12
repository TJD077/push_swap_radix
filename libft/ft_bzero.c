/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:11:27 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 18:33:45 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t length)
{
	size_t	i;
	char	*bb;

	bb = (char *)str;
	i = 0;
	while (i < length)
	{
		bb[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "llaornsajonoje";

	ft_bzero("uhhfebPUJVSIHHS", 6);
	ft_bzero(str, 6);
//	ft_bzero(str, 0);
//	ft_bzero(str, 50);
//	ft_bzero(str, 42);
}
*/