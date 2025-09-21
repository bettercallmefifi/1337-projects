#include <libft.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int	main()
{
	printf("%d\n",ft_isalnum('0'));
	printf("%d\n",ft_isalnum('h'));
	printf("%d\n",ft_isalnum('A'));
	return(0);
}*/
