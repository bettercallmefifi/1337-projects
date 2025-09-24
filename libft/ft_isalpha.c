#include <libft.h>

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
#include <stdio.h>
int main()
{
    char c = 'A';
    int result = isalpha(c);
    printf("%d\n",result);
    return(0);
}*/
