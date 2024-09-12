/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:15:50 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 19:18:56 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*new_dst;
	char	*new_src;

	new_dst = (char *)dst;
	new_src = (char *)src;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		new_dst[i] = new_src[i];
		i++;
	}	
	return (dst);
}
/*
int main(void)
{
	char str[] = "a23v";
	char str2[] = "000";
	size_t length = 2;

	printf("%s", ft_memcpy(str, str2, length));
	printf("%s", ft_memcpy(str, str + 1, length));
}
*/
