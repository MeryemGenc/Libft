#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n && s+i)
    {
        if(*(unsigned char *)(s + i) == c)
            return (void *)(s + i);
        i++;
    }
    return (0);
}

/*
int main()
{
    char a[] = "Aticleworldaaaaao";
    char b = 'o';
    
    
    printf("%s",ft_memchr(a, b, 14));
    return 0;
} */