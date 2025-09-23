#include <stddef.h>
#include <string.h>

size_t	ft_strlcat(char *dst, char const *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!src)
		src = "";
	if (!dst)
		return (0);
	k = ft_strlen (src);
	i = 0;
	while (dst[i] && i <= dsize)
		i++;
	if (i >= dsize)
		return (dsize + k);
	j = 0;
	while (src[j] && (i + j) < dsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + k);
}

#include <stdio.h>
int main() {

char dest[] ="je m'appel ";
char const str[] = "";

    printf("%zu\n",ft_strlcat(dest,str, 0));

  return 0;
}

