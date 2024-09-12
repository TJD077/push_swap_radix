/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_calloc.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tdaroca <marvin@42.fr>					 +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/02/15 11:50:34 by tdaroca		   #+#	#+#			 */
/*   Updated: 2023/02/28 17:39:13 by tdaroca          ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = malloc(count * size);
	if (!(memory))
		return (NULL);
	ft_bzero(memory, (count * size));
	return (memory);
}
/*
int main(void)
{
	printf("%p", ft_calloc(2, 3));
}
*/
