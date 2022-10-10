#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    return (0);
}

/*
int main()
{
    char a[] = "qwertyuoop";
    printf("%s",ft_strchr(a,'o'));

    return 0;
}*/