#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *j;
    unsigned char *k;

    j = (unsigned char *)s1;
    k = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (j[i] != k[i])
            return (j[i] - k[i]);
        i++;
    }
    return (0);
}
