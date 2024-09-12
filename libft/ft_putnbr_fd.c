/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:27:17 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 19:27:38 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * (-1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd(((n % 10) + 48), fd);
	}
	if (n < 10)
	{	
		n = n + 48;
		ft_putchar_fd(n, fd);
	}
}
/*
int	main()
{
	ft_putnbr_fd(0, 2);
//	ft_putnbr_fd(-2147483648, 2);
//	ft_putchar_fd('\n', 2);
//	ft_putnbr_fd(-16544, 2);
}
*/
