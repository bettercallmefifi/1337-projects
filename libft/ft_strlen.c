#include <libft.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	printf("%zu\n",ft_strlen("ferdaous"));
	return(0);
}
*/
