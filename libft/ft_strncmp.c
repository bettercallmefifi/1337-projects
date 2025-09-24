#include <libft.h>
// #include <stddef.h>
// #include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*cstr;

	str = (unsigned char *)s1;
	cstr = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	if (!s1 || !s2)
		return (0);
	while (str[i] && cstr[i] && str[i] == cstr[i] && i < n - 1)
		i++;
	return (str[i] - cstr[i]);
}

// int main()
// {
// 	printf("%d\n", ft_strncmp("ABCDEF","ABC123",3));
// 	return (0);
// }