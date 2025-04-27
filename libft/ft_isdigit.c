#include <unistd.h>
#include <stdio.h>

int ft_isdigit(const char *str)
{
    if(str[0] >= '0' && str[0] <= '9')
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
    p = ft_isdigit(a);
    printf("%d",p);
    return (0);
}