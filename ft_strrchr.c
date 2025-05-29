#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    const char *p = NULL;

    while(*s)
    {
        if(*s == c)
            p = s;
        s++;
        if(*s == '\0')
            return (char *)p;
    }
    return NULL;
}
