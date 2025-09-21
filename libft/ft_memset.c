#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

#include <stdio.h>
int main()
{
	char src[] = "ferdaous";
	ft_memset(src,'.', 2);
	printf("%s\n",src);
	return (0);
}