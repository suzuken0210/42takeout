#include <unistd.h>
#include <stdio.h>

int ft_memchr(char *s, char *t, int c)
{
    int i;
    i = 0;
    while(i != c)
    {
        if(s[i] == t[0])
        {
            while(s[i] != '\0')
            {
                write(1, &s[i], 1);
                i++;
            }
            return(0);
        }
        i++;
    }
    return(0);
}

int main(void)
{
    char *s;
    s = "abcde";
    char *t;
    t = "c";
    int d;
    d = 3;
    int p;
    p = ft_memchr(s,t,d);
    return(0);
}