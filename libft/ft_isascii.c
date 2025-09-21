#include <libft.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_isascii('a'));
	printf("%d\n",ft_isascii(0x80));
	return(0);
}*/
