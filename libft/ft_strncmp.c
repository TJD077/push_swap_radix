/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:59:09 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/13 18:59:13 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{		
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "\200";
	char	s2[] = "\0";
	size_t	n = 4;

//	ft_strncmp(s1, s2, n); 
	putchar(ft_strncmp(s1, s2, n));
//	strncmp(s1, s2, n);
	putchar(strncmp(s1, s2, n));
}
*/