#include "../push_swap.h"
#include <limits.h>
//#include "libft/libft.h"

size_t	len1(char	**string)
{
	size_t	j;

	j = 0;
	while (string[0][j] != '\0')
	{
		printf("\n%c", string[0][j]);
//		printf("%zu\n", j);
//		string++;
		j++;
	}
	printf("\n%zu", j);
	printf("\n");
	return (j);
}

size_t	len2(char	**string)
{
	size_t	i;
	size_t	j;

	i = 0;
	while(string[i] != NULL)
	{
		j = 0;
		while(string[i][j] != '\0')
		{
			printf("%c", string[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("how many numbers: %zu\n\n", i);
//	printf("\nnnmber figure: %zu", j);
	return (i);
}

int	check_if_number(char	**argument, size_t index)
{
	size_t	j;

	j = 0;
	while (argument[index][j] != '\0')
	{
		if (ft_isdigit(argument[index][j]) == 0)
		{
			printf("input number %zu is not valid\n", index + 1);
			return (0);
		}
		j++;
	}
	return (1);
}

// int	check_if_number(int	number, size_t index)
// {
// 	char	*strnum;
// 	size_t	i;

// 	i = 0;
// 	strnum = ft_itoa(number);
// 	while(strnum[i] != '\0')
// 	{
// 		if (ft_isdigit(strnum[i]) == 0)
// 		{
// 			printf("input number %zu is not valid\n", index + 1);
// 			return (0);
// 		}
// 		i++;
// 	}
// 	return (1);
// }

int	duplicate_number(char	**argument, size_t argument_length)
{
	size_t	i;
	size_t	j;
	int	number;

	i = 0;
	while(i < argument_length)
	{
		j = i;
		number = atoi2(argument[i]);
		while(j <= argument_length - 1)/*due to "if (number == atoi2(argument[++j]))", specifically ++j, in the final loop occurrence NULL will passed as an argument*/
		{
			if (number == atoi2(argument[++j]))
			{
				printf("input 'number' %zu is, at least, twice written", j + 1);
				return (0);
			}
		}
		i++;
	}	
//	printf("OK duplicate number\n");
	return (1);
}

void	posible_errors(char	**argument, size_t	i)
{	
		if (!check_if_number(argument, i))
			exit(0);
		if (atoi2(argument[i]) < INT_MIN || atoi2(argument[i]) > INT_MAX)
		{
			printf("number %zu is either too high or too low. It overflows data type int", i + 1);
			exit(0);
		}
}

	// if (len1(argument) == 1 || i != 0 && len1(argument) != 1)
	// {
	// 	if (!check_if_number(argument, i))
	// 		exit(0);
	// 	if (atoi2(argument[i]) < INT_MIN || atoi2(argument[i]) > INT_MAX)
	// 	{
	// 		printf("number %zu is either too high or too low. It overflows data type int", i + 1);
	// 		exit(0);
	// 	}
	// }
	// else
	// {	
	// 	if (!duplicate_number(argument, i))
	// 		exit(0);
	// }

	// if (len1(argument) - 1 == i) /*la i falla*/
	// {	
	// 	if (!duplicate_number(argument, i))
	// 		exit(0);
	// }
	// else
	// {
	// 	if (!check_if_number(argument, i))
	// 		exit(0);
	// 	if (atoi2(argument[i]) < INT_MIN || atoi2(argument[i]) > INT_MAX)
	// 	{
	// 		printf("number %zu is either too high or too low. It overflows data type int", i + 1);
	// 		exit(0);
	// 	}
	// }

int	check_args(int	argc, char	**argv, char	**argument)
{
//INSTEAD OF argument[], should stacks be used¿? create and fill the stacks at the same time as the arguments are checked. 
// comprobar el caso: argumentos [""] => con el <if (!(*argument))>
	size_t	i;/*total number of nodes*/
	size_t	j;/*total number of arguments passed from main*/
	size_t	k;
	char	**aux; /*debe ser doble puntero pq es lo que devuelve el split, pero no sería necesario. Toma los valores indivdualmente (strings o char/int)*/

	i = 0;
	j = 1; /*el primer elemnto, [0], de argv es el nombre del ejecutable*/
	if (argc >= 2)
	{
		while(argv[j] != NULL)
		{
			aux = split2(argv[j], ' ');
//			printf("\n%zu\n", len1(aux));
//			len2(aux);
			k = 0;
			while (aux[k] != NULL)
			{
				argument[i] = aux[k];
				posible_errors(argument, i);
				k++;
				i++;
			}
			argument[i] = NULL;
			j++;
			if (!(*argument))
				{
					printf("empty parammeters or no parameters entered\n");
					return (1);
				}
		}
//		i = 0;
		// len1(argument);
		// printf("\n");
		// len2(argument);
		if (!duplicate_number(argument, i - 1)) /*i position contains NULL*/
			exit(0);
		free(aux);
	}
	return (1);
}
