/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:12:46 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 20:14:55 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t length)
{
	size_t	newlengthsubstr;
	char	*substr;
	size_t	i;

	if (!str)
		return (0);
	if ((unsigned int)ft_strlen(str) < start)
		return (ft_strdup(""));
	newlengthsubstr = ft_strlen(str + start);
	if (newlengthsubstr < length)
		length = newlengthsubstr;
	substr = malloc(sizeof(char) * (length + 1));
	if (!(substr))
		return (NULL);
	i = 0;
	while (i < length)
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
int main(void)
{
//	unsigned int start = 5;
//	size_t length = 6;
//	char const   str[] = "qwerty";
// 
//	printf("%s", ft_substr(str, start, length));

//	printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 7, 0));
//	printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 0, 0));
	printf("%s\n", ft_substr("lorem ipsum dolor sit amet", 400, 20));
//	printf("%s\n", ft_substr("", 2, 2));
}
*/