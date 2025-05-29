int ft_strncmp(const char *s1, const char *s2, size_t n)
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
        if (j[i] == '\0')
            return 0;
        i++;
    }
    return 0;
}
