#include "libft.h"
#include <stdlib.h>

void *ft_memmove(void* dst, const void* src, size_t n)
{ /* diger projelerle karsilasirdim => ayni sonuc */
    size_t i;
    
    char *tmp = (char *)malloc(sizeof(char) * n);
    if(tmp == NULL)
        return NULL;
    i = 0;
    while (i < n)
    {
        *(tmp + i) = *(const char*)(src + i);
        i++; 
    }
    i = 0;
    while (i < n)
    {
        *(char *)(dst + i) = *(tmp + i);
        i++;
    }
    free(tmp); 
    return dst;
}

/*
int main()
{
    char a[] = "Aticleworld";
    char b[16] = {0};
    
    ft_memmove(b, a, 5);
    printf("%s\n",b);
    ft_memmove(a, a+3, 5);
    printf("%s\n",b);
    ft_memmove(a+3, a, 5);
    printf("%s",b);
    return 0;
} */