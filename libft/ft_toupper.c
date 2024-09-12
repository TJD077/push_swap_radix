/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:41:25 by tdaroca           #+#    #+#             */
/*   Updated: 2023/01/25 12:10:41 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper( int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}
/*
int	main(void)
{
	int charac;
	int checker;

	charac = 105;
	checker = ft_toupper(charac);
	write(1, &checker, 1);
}
*/