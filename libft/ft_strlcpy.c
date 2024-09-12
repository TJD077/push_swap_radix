/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:37:10 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 20:03:09 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy( char *dest, const char *src, size_t size)
{
	size_t	j;

	j = 0;
	if (size != 0)
	{
		while (src[j] != '\0' && j < (size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return ((size_t)ft_strlen(src));
}	

/*
int	main(void)
{
	char	dest[] = "Hola";
//	printf("%s\n", dest);
	ft_strlcpy(dest, "lorem ipsum dolor sit amet", 1);
//	printf("%s\n", dest);
}
*/