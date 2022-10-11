#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t a;

    a = 0;
    while (a < dstsize && src[a] != '\0')
    {
        dst[a] = src[a];
        a++;
    }
    dst[a] = '\0';
    return a;
}

/*
int main()
{
    char a[] = "hshshkjhasjh";
    char b[7];

    printf("%d", ft_strlcpy(b, a, 7));
    return 0;
} */