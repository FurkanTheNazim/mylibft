void ft_bzero(void *s, size_t n)
 {
    size_t i;
    unsigned char *j;

    j = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        j[i] = (unsigned char)0;
        i++;
    }
 }