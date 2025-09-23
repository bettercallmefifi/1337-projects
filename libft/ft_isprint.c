#include <libft.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_isprint(' '));
	printf("%d\n",ft_isprint(31));
	return(0);
}*/
