#include "libft.h"

int arrLen(char const *arr, char c)
{
    int len;
    int i;

    i = 0;
    len = 0;
    while (arr[i])
    {
        if (arr[i] != c)
            len++;
        i++;
    }
    return len;
}

void transferArr(char **dst, char const *src, char c)
{
    int i;
    int j;

    i = 0;
    while (*src)
    {
        if (*src == c)
        {
            src++;
            continue;
        }
        j = 0;
        while (*src && *src != c )
        {
            j++;
            src++;
        }
        dst[i++] = ft_substr(src - j, 0, j);
        src++;
    }
    dst[i] = '\0';
}

char **ft_split(char const *s, char c)
{
    char **arr;

    arr = malloc(sizeof(char *) * arrLen(s, c) + 1);
    if (!arr)
        return NULL;
    transferArr(arr, s, c);
    return arr;
}


int main()
{
    char a[] = "hello-people-how-are-you";
    char b = '-';
    char **c = ft_split(a, b);

    printf("%s\n%s\n%s\n%s\n%s", c[0], c[1], c[2], c[3], c[4]);

    return 0;
} 