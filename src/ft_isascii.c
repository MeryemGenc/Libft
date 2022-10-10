#include "libft.h"

int ft_isascii(int c) /* fonksiyon ascii istiyor. */
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

/*
int main()
{
    printf("%d", ft_isascii(128));
    return 0;
} */