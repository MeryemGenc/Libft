#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int a;

    a = (int)ft_strlen(s);
    while (a >= 0)
    {
        if (s[a] == (char)c)
            return ((char *)(s + a));
        a--;
    }
    return (0);
}

// char *ft_strchr(const char *s, int c)
// {
//     while (*s != '\0' && c != *s)
//         s++;
//     if (c == *s)
//         return ((char *)s);
//     return (0);
// }

/*
int main()
{
    char a[] = "qwertyuoop";
    printf("%s",ft_strrchr(a,'o'));

    return 0;
} */