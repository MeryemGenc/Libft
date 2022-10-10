#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t a;

    a = 0;
    while (a < n)
    {
        ((unsigned char *)s)[a] = c;
        a++;
    }
    return (s);
}

/*
int main()
{
    char a[] = "qwertyu";

    printf("%s", ft_memset(a, 'x', 4));
    return 0;
}*/