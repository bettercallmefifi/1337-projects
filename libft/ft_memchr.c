#include <libft.h>
// #include <stddef.h>
// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	h;

	i = 0;
	str = (unsigned char *)s;
	h = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == h)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	printf("%s\n",(char *)ft_memchr("ferdaeous", 'a', strlen("ferdaous")));
// 	return (0);
// }