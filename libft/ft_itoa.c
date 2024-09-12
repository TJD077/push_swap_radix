/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:50:38 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 18:55:55 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_size(long int num)
{
	int	size;

	size = 1;
	if (num < 0)
	{
		num = num * (-1);
		size++;
	}
	while (num >= 10)
	{
		num = num / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long int	number;
	char		*str;
	int			i;

	number = n;
	i = number_size(n);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	if (number == 0)
		str[0] = '0';
	str[i] = '\0';
	i--;
	if (number < 0)
	{	
		str[0] = '-';
		number = -number;
	}
	while (number > 0)
	{	
		str[i] = 48 + (number % 10);
		number = number / 10;
		i--;
	}
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(123));
	printf("%s\n", ft_itoa(-2147483648LL));
}
*/