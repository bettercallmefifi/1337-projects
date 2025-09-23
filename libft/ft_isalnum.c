#include <libft.h>

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}
/*
int	main()
{
	printf("%d\n",ft_isalnum('0'));
	printf("%d\n",ft_isalnum('h'));
	printf("%d\n",ft_isalnum('A'));
	return(0);
}*/
