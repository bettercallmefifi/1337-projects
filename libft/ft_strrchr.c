#include <libft.h>
// #include <stddef.h>
// #include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	h;
	char	*str;

	str = (char *)s;
	i = 0;
	if (!s)
		return (NULL);
	if (!c)
		return ((char *)(str + ft_strlen(str)));
	h = (char)c;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == h)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s\n",ft_strrchr("ferhdaohus",'h'));
// 	return (0);
// }