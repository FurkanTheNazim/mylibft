#include "libft.h"
void *ft_memset(void *b, int c, size_t n)
{
    size_t  i;
    unsigned char *j;

    i = 0;
    j = (unsigned char *)b;
    while (i < n)
    {
        j[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

#include <stdio.h>

int main()
{
    char str[13];
    ft_memset(str, 'A', 8);
    str[8] = '\0';

    printf("%s", str);

    return 0;
}