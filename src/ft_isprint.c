#include "libft.h"

int ft_isdigit(int c) /* fonksiyon ascii istiyor. */
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}

/*
int main()
{
    printf("%d", ft_isdigit(127));
    return 0;
} */