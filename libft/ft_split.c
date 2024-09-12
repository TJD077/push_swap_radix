/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdaroca <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:30:28 by tdaroca           #+#    #+#             */
/*   Updated: 2023/02/28 19:40:57 by tdaroca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char *s, char c)
{
	int	count;
	int	i;
	int	aux;

	count = 0;
	i = 0;
	aux = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c && aux != 1)
		{
			count++;
			aux = 1;
		}
		else if (s[i] == c)
			aux = 0;
		i++;
	}
	return (count);
}

static char	*word(char *s, int start, int last)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (last - start + 1));
	if (!(str))
		return (NULL);
	i = 0;
	while (start < last)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		beginning;

	split = ft_calloc(word_count((char *)s, c) + 1, sizeof(char *));
	if (!s || !(split))
		return (NULL);
	j = 0;
	i = 0;
	beginning = -1;
	while (j <= ft_strlen(s))
	{
		if (s[j] != c && beginning < 0)
			beginning = j;
		if ((s[j] == c || j == ft_strlen(s)) && beginning >= 0 \
			&& i < word_count((char *)s, c))
		{
			split[i] = word((char *)s, beginning, j);
			beginning = -1;
			i++;
		}
		j++;
	}
	return (split);
}

int	main(void)
{
//	char const str[] = "qwerty1qwerty1qwerty";
//	char c = '1';
//	ft_split(str, c);	

	ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
//	ft_split("lorem   ipsum dolor     sit amet, consectetur   adipiscing elit.
//	 Sed non risus. Suspendisse   ", ' ');

//	ft_split("lorem ipsum dolor sit   ", ' ');
//	ft_split("      ", ' ');
//	ft_split("", 'z');
//	ft_split("qwerty1qwerty1qwerty", '1');
//	ft_split("lo", ' ');
}
