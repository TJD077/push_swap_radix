/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 08:44:54 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 20:02:45 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_length;
	size_t	src_length;

	i = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if ((dest_length + 1) < dstsize)
	{	
		while (src[i] != '\0' && (dest_length + 1) + i < dstsize)
		{
			dest[dest_length + i] = src[i];
			i++;
		}
	}
	if ((dest_length + 1) > dstsize)
		return (dstsize + src_length);
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
/*
int	main(void)    
{
	char	dest[] = "Hola";
	printf("%zu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
//	printf("%li\n", strlcat(dest, "lorem ipsum dolor sit amet", 15));  
//	printf("%li\n", ft_strlcat(dest, "lorem ipsum", 15));
//	printf("%li\n", strlcat(dest, "lorem ipsum", 15));
}
*/