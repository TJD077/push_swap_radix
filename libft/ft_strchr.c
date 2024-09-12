/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:42:25 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 19:51:06 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//cambiar donde apunta el puntero ( formas de recoorrer un str/array)
#include "libft.h"

char	*ft_strchr( const char *s, int c)
{
	char	charac;
	int		i;

	charac = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == charac)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (s[i] == charac)
	{
		return ((char *)s + i);
	}
	return (NULL);
}
/*
int	main(void)
{
	int charac;
	const char str[] = "qwerty";

	charac = 'r';
	ft_strchr(str, charac);
	printf("%s", ft_strchr(str, charac));
}
*/
