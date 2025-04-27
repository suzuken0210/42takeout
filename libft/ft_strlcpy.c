#include <unistd.h>
#include <stdio.h>

char *ft_strlcpy(const char *m)
{
    int i;
    i = 0;
    char *d;
    while(m[i] != '\0')
    {
        d[i] = m[i];
        i++;
    }
    d[i] = '\0';
    return(d);
}

int main(void)
{
    char *s;
    s = "aiueo";
    char *f;
    f = ft_strlcpy(s);
    printf("%s",f);
    return (0);
}