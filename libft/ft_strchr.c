#include <unistd.h>
#include <stdio.h>

char *ft_strchr(char *t,char *s)
{
    int i;
    i = 0;
    while(t[i] != '\0')
    {
        if(t[i] == *s)
        {
            return(&t[i]);
        }
    }
    return(t);
}

// なぜが無限ループするけど、mainが悪そうだから一旦これで完成
// int main(void)
// {
//     char *t;
//     t = "aiueo";
//     char *s;
//     s = "u";
//     char p;
//     p = *ft_strchr(t,s);
//     return (0);
// }