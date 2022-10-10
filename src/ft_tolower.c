#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

/*
int main()
{
    printf("%c", ft_tolower('A'));
    return 0;
}*/