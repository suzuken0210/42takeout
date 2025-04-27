#include <unistd.h>
#include <stdio.h>

int ft_isalpha(const char *str)
{
    if(str[0] >= 'a' && str[0] <= 'z')
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

int main(void)
{
    char *a;
    a = "t";
    char *b;
    b = "1";
    int p;
    p = ft_isalpha(b);
    printf("%d",p);
    return (0);
}