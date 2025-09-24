// #include <stddef.h>
// #include <string.h>
#include <libft.h>

size_t	ft_strlcat(char *dest, char const *src, size_t dsize)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (dsize <= destlen)
		return (dsize + srclen);
	while (src[i] && destlen + i < dsize - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

// #include <stdio.h>
// int main() {

// char dest[] ="je m'appel ";
// char const str[] = "Ferdaous El Idrissi.";

//     printf("%zu\n",ft_strlcat(dest,str, 15));
// 	printf("%s\n",dest);
// 	printf("%ld\n",strlen(dest));

//   return 0;
// }
