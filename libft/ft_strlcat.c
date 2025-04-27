#include <unistd.h>
#include <stdio.h>

// ft_strlcat(const char *s,*g);
char *ft_strlcat(char *s, char *g)
{
    int i;
    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    int p;
    p = 0;
    while(g[p] != '\0')
    {
        s[i] = g[p];
        i++;
        p++;
    }
    i++;
    s[i] = '\0';
    return (s);
}

int main(void)
{
    char s[10] = "aiueo";
    char *g;
    g = "ABCDE";
    char *t;
    t = ft_strlcat(s,g);
    printf("%s",t);
    return (0);
}