#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    i = 0;
    char *dest;

    while(src != '\0')
    {
        i++;
    }
    dest = (char *)malloc(sizeof(char) * (i + 1));
    dest[i] = '\0';
    while(i >= 0)
    {
        dest[i] = src[i];
        i--;
    }
    return (dest);
}