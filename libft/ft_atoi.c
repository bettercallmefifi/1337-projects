#include <libft.h>
#include <limits.h>
#include <stdio.h>
//#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int i;
	unsigned long long result;
	int signe;

	i = 0;
	result = 0;
	signe = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			signe *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - 48);
		if (result >= LLONG_MAX && signe == -1)
			return (0);
		else if (result >= LLONG_MAX && signe == 1)
			return (-1);
		i++;
	}
	return (signe * result);
}

// int main()
// {
// 	printf("%d\n",atoi("18446744073709551615"));
// 	return (0);
// }