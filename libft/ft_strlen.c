/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:27:40 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 20:04:13 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
