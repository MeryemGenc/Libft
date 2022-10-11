#include "libft.h"
#include "stdlib.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *temp;
    int i;

    i = 0;
    temp = (char *)malloc(sizeof(char) * len + 1);
    if (temp == NULL)
        return NULL;
    while (len < (start + len))
    {
        *(temp + i) = s[start++];
        i++;
    }
    *(temp + i) = '\0';
    return (temp);
}



int main()
{
    char a[] = "hello people";
    char *temp = ft_substr(a, 2, 5);
    printf("%s\n", temp);
    free(temp);
    return 0;
}