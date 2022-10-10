#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, '0', n);
}

/*
int main()
{
    char a[] = "qwertyu";
    ft_bzero(a, 4);
    printf("%s", a);
    return 0;
}*/