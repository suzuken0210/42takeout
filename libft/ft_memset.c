#include <unistd.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char *p;

	p = (char *)b;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}


int main()
{
    char str[100] = "abcdefg";
    ft_memset(str, 's', 3 * sizeof(char));
    printf("After memset(): %s\n", str);
    return 0;
}