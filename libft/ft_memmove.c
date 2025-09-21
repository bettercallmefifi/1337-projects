#include <libft.h>
// #include <stddef.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!s1 || !s2)
		return (NULL);
	d = (unsigned char *)s1;
	s = (const unsigned char *)s2;
	if (s < d && d < s + n)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	return (s1);
}
// #include <stdio.h>
// int main()
// {
// 	char dest[20];
// 	ft_memmove(dest,"ferdaous",3);
// 	printf("%s\n",dest);
// 	return (0);
// }
