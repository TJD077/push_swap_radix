/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:55:08 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 19:57:19 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	if (s1 || s2)
	{
		str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!(str))
			return (NULL);
		i = -1;
		j = 0;
		while (++i < (ft_strlen(s2) + ft_strlen(s1)))
		{
			if (i < ft_strlen(s1))
				str[i] = s1[i];
			else if (i >= ft_strlen(s1) && i < (ft_strlen(s2) + ft_strlen(s1)))
			{
				str[i] = s2[j];
				j++;
			}
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
/*
int main(void)
{
//	printf("%s\n", ft_strjoin("Hola", "Mundo"));
//	printf("%s\n", ft_strjoin("", "Mundo"));
//	printf("%s\n", ft_strjoin("Hola", ""));
//	printf("%s\n", ft_strjoin("lorem ipsum dolor sit amet", "Mundo"));
//	printf("%s\n", ft_strjoin("", ""));
	char str1[] = "lorem ipsum";
//	char str2[] = "dolor sit amet";
	str1[0] = '\0';
	char *str2 = 0;
	printf("%s", ft_strjoin(str1, str2));
//	printf("%s", ft_strjoin(0, 0));
}
*/