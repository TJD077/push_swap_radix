/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:11:11 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 20:11:51 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	if (!s1 || !set)
		return (NULL);
	while (s1[0] != '\0' && ft_strchr(set, s1[0]))
		s1++;
	i = ft_strlen(s1) - 1;
	while (i >= 0 && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*
int main(void)      
{
//	str[0] = 0;
//	char *strset = 0;

	printf("%s\n", ft_strtrim("", ""));  
//	printf("%s\n", ft_strtrim("lorem ipsum", "ie"));
//	printf("%s\n", ft_strtrim("lorem ipsum dolor sit amet", "te"));   
//	printf("%s\n", ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " "));   
//	printf("%s\n", ft_strtrim("lorem ipsum dolor sit amet", "tel"));  
//	printf("%s\n", ft_strtrim("lorem ipsum", "tel"));
}
*/