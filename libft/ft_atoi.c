/* ************************************************************************** */
/*																			  */
/*														:::	  ::::::::        */
/*   ft_atoi.c										  :+:	  :+:	:+:       */
/*													+:+ +:+		 +:+	      */
/*   By: tdaroca <marvin@42.fr>					 +#+  +:+	   +#+		      */
/*												+#+#+#+#+#+   +#+		      */
/*   Created: 2023/02/14 17:23:58 by tdaroca		   #+#	#+#			      */
/*   Updated: 2023/02/28 18:35:32 by tdaroca          ###   ########.fr       */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	minus = 1;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			minus = minus * (-1);
		i++;
	}
	result = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * minus);
}
/*
int	main(void)
{
//	int n;
//	char str [] = "	 ---+1234a b567";
//
//	n = ft_atoi(str);
//	printf("%d", n);
	printf("%d", ft_atoi("	 ---+1234a b567"));
}
*/