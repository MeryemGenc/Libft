#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    
    i = 0; 
    while (i < n && s1+i)
    {
        if(*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i) )
            break;
        i++;
    }
    return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
/*
int main()
{
    char a[] = "hellowarldaaaaao";
    char b[] = "helloworldaaaaao";
    
    printf("%d",ft_memcmp(a, b, 33));
    return 0;
} */