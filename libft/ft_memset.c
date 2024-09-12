/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:20:03 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 19:20:47 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*bb;

	bb = (char *)b;
	i = 0;
	while (i < len)
	{
		bb[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int main(void)
{
	char str[] = "HolaMundo";
	int charac = 55;
	size_t length = 4;

	printf("%s", ft_memset (str, charac, length));
//	printf("%s", str);
//	printf("%s", ft_memset (str, charac, length));
}
*/