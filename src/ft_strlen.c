#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t a;

    a = 0;
    while (s[a])
    {
        a++;
    }
    return a;
}

/*
int main()
{
    char a[] = "hshjhkjhsaaaaa";
    char b[3];

    printf("%d",ft_strlen(a));
    return 0;
} */