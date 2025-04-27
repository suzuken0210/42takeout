#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s, char *t, int n)
{
    int i;
    i = 0;
    int p;
    p = 0;
    while(i != n)
    {
        if(s[i] != t[i])
        {
            p = s[i] - t[i];
            break;
        }
        else 
        {
            i++;
        }
    }
    return (p);
}

int main(void)
{
    char *s;
    s = "abcde";
    char *t;
    t = "abbdd";
    int n;
    n = 3;
    int y;
    y = ft_strncmp(s,t,n);
    printf("%d",y);
    return(0);
}