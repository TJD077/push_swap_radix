/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:51:46 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 19:52:37 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		length;
	char	*newstr;
	int		i;

	length = ft_strlen(str);
	newstr = malloc(sizeof(char) * (length + 1));
	if (!(newstr))
		return (NULL);
	i = 0;
	while (str[i] && i < length)
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return ((char *)newstr);
}
/*
int main(void)
{
   char str[] = "qwerty";
   printf("%s", ft_strdup(str));
}
*/
