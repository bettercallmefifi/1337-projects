int	isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
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
