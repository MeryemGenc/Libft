#include "libft.h"

int ft_isdigit(int c) /* fonksiyon ascii istiyor. */
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

/*
int main()
{
    printf("%d", ft_isdigit('0'));
    return 0;
} */