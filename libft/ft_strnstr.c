#include <libft.h>
// #include <stdio.h>
// #include <stddef.h>
// #include <string.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;

	j = 0;
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[0])
		{
			while (little[j] && big[i + j] == little[j] && (i + j) < len)
				j++;
			if (j == ft_strlen(little))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char *largestring = "Foo Bar Baz";
//     const char *smallstring = "Bar";
//     char *ptr;
//     //Searches only within the first len characters of haystack (5);)
//     ptr = ft_strnstr(largestring, smallstring, 5);
//     if (ptr != NULL) {
//         printf("%s\n", ptr);
//     } else {
//         printf("Substring not found\n");
//     }
//     return (0);
//}