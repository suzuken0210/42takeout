#include <unistd.h>
#include <stdio.h>

int ft_memcmp(const char *s, const char *t, int d)
{
    int i;
    i = 0;
    while(i != d)
    {
        if(s[i] != t[i])
        {
            return(1);
            break;
        }
        else
        {
            i++;
        }
    }
    return(0);
}

int main(void)
{
    char *s;
    s = "abcde";
    char *t;
    t = "abcfe";
    int d;
    d = 3;
    int p;
    p = ft_memcmp(s,t,d);
    write(1, "-", 1);
    char char_p = p + '0';
    write(1, &char_p, 1);
    return(0);
}