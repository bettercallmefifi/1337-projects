#include <libft.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		p = malloc (0);
		return p;
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	p = malloc (nmemb * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, nmemb * size);
	return (p);
}