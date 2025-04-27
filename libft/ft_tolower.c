#include <unistd.h>
#include <stdio.h>

char ft_tolower(char s)
{
    if(s >= 'A' && s <= 'Z')
    {
        return (s + 32);
    }
    return(s);
}

int main(void)
{
    char *s;
    s = "A";
    char p;
    p = ft_tolower(*s);
    printf("%c",p);
    return (0);
}