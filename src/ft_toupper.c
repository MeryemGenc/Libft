#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return (c);
}

/*
int main()
{
    printf("%c", ft_toupper('a'));
    return 0;
}*/