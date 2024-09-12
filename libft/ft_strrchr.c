/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:08:35 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 20:10:32 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		length;
	char	*ss;

	length = ft_strlen(s);
	ss = (char *)s;
	if (ss[length] == (char)c)
		return (&ss[length]);
	length--;
	while (length >= 0)
	{
		if (ss[length] == (char)c)
		{
			return (&ss[length]);
		}
		length--;
	}
	return (NULL);
}

/* int	main(void)
{
	int charac;
	const char str[] = "qwertry";

	charac = 'r';
	ft_strrchr(str, charac);
//printf("%s", ft_strrchr(str, charac));
//	printf("%s", ft_strrchr(str, 't' + 256));  =s 
} */
