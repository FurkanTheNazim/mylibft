void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *j;
    unsigned char *k;

    j = (unsigned char *)dest;
    k = (unsigned char *)src;
    i = 0;
    while (i < n)
    {
        j[i] = k[i];
        i++;
    }
    return (dest);
}