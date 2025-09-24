#include <libft.h>
// #include <stddef.h>
// #include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	i = 0;
	if (dsize == 0)
		return (srclen);
	while (src[i] && i < dsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}
// #include <stdio.h>
// int main()
// {
// 	char dest[20];
// 	const char src[] = "ferdaous";
// 	printf("%zu\n",ft_strlcpy(dest,src,6));
// 	printf("%s\n",dest);
// 	printf("%ld\n",strlen(dest));
// 	return (0);
// }