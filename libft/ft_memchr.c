/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:59:54 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 19:12:06 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_s;

	new_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(new_s + i) == (unsigned char)c)
			return ((void *)new_s + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Hell1";
	int c = '1';
	size_t length = -1;

	printf("%s", ft_memchr(str, c, length));   pq no da null o error 
	printf("%s", ft_memchr("Hello", 'e', 2));
}
*/
