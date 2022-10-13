#include "libft.h"
#include "stdlib.h"

char **ft_split(char const *s, char c)
{
    int i;
    char **arr;

    i = 0;
    arr = (char **)malloc(ft_strlen(s) * 2);
    printf("%s", ft_strlen(s));
    return arr;
}

int main()
{
    char a[] = "hello,people,how,are,you";
    char b = ',';
    char **c = ft_split(a, b);

    printf("%s", c[0], c[1], c[2], c[3], c[4]);

    return 0;
} 