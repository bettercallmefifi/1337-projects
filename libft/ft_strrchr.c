#include <libft.h>
// #include <stddef.h>
// #include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	h;

	i = 0;
	if (!s)
		return (NULL);
	if (!c)
		return ((char *)(s + ft_strlen(s)));
	h = (char)c;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == h)
			return ((char *)(s + i));
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