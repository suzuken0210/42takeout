#include <unistd.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(void)
{
    char *s;
    s = "aoueo";
    int p;
    p = ft_strlen(s);
    printf("%d",p);
    return (0);
}