/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:17:39 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 20:19:25 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*newdest;
	char			*newsrc;
	size_t			i;

	newdest = (char *)dst;
	newsrc = (char *)src;
	i = 0;
	if (src > dst)
	{
		while (i < len)
		{
			newdest[i] = newsrc[i];
			i++;
		}
	}
	else if (src < dst)
	{
		len = len - 1;
		while ((int)len >= 0)
		{
			newdest[len] = newsrc[len];
			len--;
		}
	}
	return (dst);
}
/*
int main(void)
{
//	char str[] = "a23v";
	char str2[] = "0123456789";
	size_t length = 2;

//	printf("%s\n", ft_memmove(str, str2, length));
//	printf("%s\n", ft_memmove(str2, str2 + 3, length));
	printf("%s\n", ft_memmove(str2 + 3, str2, length));
}
*/