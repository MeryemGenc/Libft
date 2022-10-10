#include "libft.h"

int ft_isalnum(int c) /* fonksiyon karakterin ascii degerini ister. */
{
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        return (1);
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

/*
int main()
{
    printf("%d", ft_isalnum(1));
    return 0;
}*/