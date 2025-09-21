//#include <stddef.h>

// void	ft_bzero(void *s, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*str;

// 	i = 0;
// 	str = s;

// 	while (i < n)
// 	{
// 		str[i] = 0;
// 		i++;
// 	}
// }
#include <libft.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// #include <stdio.h>
// int main()
// {
// 	char src[] = "ferdaous";
// 	ft_bzero(src, 2);
// 	printf("%s\n",src);
// 	return (0);
// }