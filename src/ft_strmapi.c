#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *res;
    unsigned int a;

    a = 0;
    if (!s)
        return NULL;
    res = malloc((ft_strlen(s) + 1));
    if (!res)
        return NULL;
    while (res[a]) 
    {    
        res[a] = f(a, s[a]);
        a++;
    }
    res[a] = '\0';
    return res;
}

/*
int main()
{
    char arr[] = "abcdefg";
    unsigned int a = 5;
    char *b;
    //printf("%d", tmp_func(a, arr[0]));
    printf("%d", ft_strmapi(arr, tmp_func(a, 'a')));
    return 0;
} */