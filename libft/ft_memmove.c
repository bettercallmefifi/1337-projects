#include <libft.h>
//#include <stddef.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	if (!s1 || !s2)
		return (NULL);
	s = (const unsigned char *)s2;
	d = (unsigned char *)s1;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
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
