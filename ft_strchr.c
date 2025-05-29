#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if(*s == c)
            return (char *) s;
        s++;
    }
    return NULL;
}

#include <stdio.h>

int main()
{
    char *s = "faam";
    char *ret = ft_strchr(s, 'aa');
    printf("ret: %s\n", ret);
}