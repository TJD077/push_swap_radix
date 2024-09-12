#include "../push_swap.h"

int	atoi2(const char *str)
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
int main()
{
	printf("%d", atoi2(""));
}
*/