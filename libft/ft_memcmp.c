#include <libft.h>
// #include <stdio.h>
// #include <stddef.h>
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*cstr;
	size_t			i;

	i = 0;
	str = (unsigned char *)s1;
	cstr = (unsigned char *)s2;
	if (!str || !cstr)
		return (0);
	if (n == 0)
		return (0);
	while (str[i] && cstr[i] && str[i] == cstr[i] && i < n - 1)
		i++;
	return (str[i] - cstr[i]);
}

// int main()
// {
// 	printf("%d\n",ft_memcmp("ABC","ABD",3));
// 	return (0);
// }