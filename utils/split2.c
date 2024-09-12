# include "../push_swap.h"

size_t	word_count(char *string, char c)
{
	int i;
	size_t count;

	count = 0;
	i = 0;
	
	while (string[i] != '\0')
	{
		if (string[i] != c)
		{
			if (string[i + 1] == '\0')
				count++;
			i++;
		}
		else
		{
			if (i != 0 && string[i - 1] != c)
				count++;
			i++;
		}
	}
//	printf("%zu\n", count);
	return (count);
}

char	*word(char	**s, char c)
{
	size_t	i;
	char	*substr;
	size_t len;
	char	*aux;

	aux = *s;
	len = 0;
//	printf("%c\n", *s[1]);
	while (aux[len] != '\0' && aux[len] != c)
	{
//		printf("%zu", len);
//		printf("%c\n", aux[len]);
		len++;
	}
	substr = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (*s[0] != c && *s[0] != '\0')
	{
		substr[i++] = *s[0];
		(*s)++;
	}
	substr[i] = '\0';
	return (substr);
}
size_t	len(char	*string)
{
	size_t	i;

	i = 0;
	while (string)
		i++;
	return (i);
}
char	**split2(char *s, char c)
{
	char	**split;
//	size_t 	i;
	size_t	j;
//	size_t	beginning;
	size_t nummberof_words;

	// if (!s || !c)
	// 	return (NULL);
	nummberof_words = word_count(s, c);
	split = calloc(nummberof_words + 1, sizeof(char *));
	if (!split)
		return (NULL);
//	i = 0;
	j = 0;
//	beginning = 0;
	while (s && j < nummberof_words)
	{
		if (s[0] == c)
		{
			while (s[0] == c)
				s++;
		}
		else
		{
			split[j] = word(&s, c);
//			printf("%s\n", split[j]);
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}
/*
int	main(int argc, char	**argv)
{
	split2(argv[1], ' ');
	argc++;
}
*/
// no need for control over void pointer 's'. It should be managed before fucntion call in push_swap

/*
int main()
{
	printf("%zu", word_count("hola que tal", ' '));
}
*/