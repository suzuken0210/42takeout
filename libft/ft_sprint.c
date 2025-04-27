#include <unistd.h>
#include <stdio.h>

int ft_isalpha(c)
{
    if(str[0] >= 32 && str[0] <= 126)
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
    char *c;
    c = "/n";
    int p;
    p = ft_isalpha(c);
    printf("%d",p);
    return (0);
}