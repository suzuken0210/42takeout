#include <unistd.h>
#include <stdio.h>

char ft_toupper(char s)
{
    if(s >= 'a' && s <= 'z')
    {
        return (s - 32);
    }
    return(s);
}

int main(void)
{
    char *s;
    s = "a";
    char p;
    p = ft_toupper(*s);
    printf("%c",p);
    return (0);
}