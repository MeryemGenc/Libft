#include "libft.h"
#include <string.h>

// size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
//     size_t a;
//     size_t dststart; /* dst'nin ilk bos indexi */

//     a = 0;
//     dststart = ft_strlen(dst);
//     if (dstsize <= dststart)
//         return (ft_strlen(src) + dstsize);
//     while (dststart < dstsize - 1 && src[a] != '\0' )
//     {
//         dst[dststart + a] = src[a];
//         a++;
//     }
//     dst[dststart + a] = '\0';
//     //printf("\n--->%s\n", &src[a]); ??????????????????????
//     return (ft_strlen(dst) + ft_strlen(&src[a]));
// }

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dststart;
    size_t a;
    size_t srclen;

    dststart = ft_strlen(dst);
    srclen = ft_strlen(src);
    
    if (dststart > dstsize)
        return (dstsize + srclen);

    a = 0;
    while (src[a] && a + dststart < dstsize - 1)
    {
        dst[dststart + a] = src[a];
        a++;
    }
    dst[dststart + a] = '\0';
    return (dststart + srclen);
}

/*
int main()
{
    char a[30] = "abcgggggggdefg";
    char c[15] = "hijklmnoss";


    printf("%d", ft_strlcat(a, c, 25));
    return 0;
} */