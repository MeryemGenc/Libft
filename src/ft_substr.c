#include "libft.h"
#include "stdlib.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *temp;
    size_t i;

    i = 0;
    temp = (char *)malloc(sizeof(char) * (len + 1));
    if (!temp)
        return (NULL);
    --start;
    while (i < len && s[start]) // if strlen(s) < len : zaten s[start] == NULL'se döngü durur
    {
        temp[i] = s[start++];
        i++;
    }
    temp[i] = '\0'; // if start > strlen(s) : temp = NULL olur zaten.
    return temp;
}

/*
int main()
{
    char a[] = "hello_people";
    char *temp = ft_substr(a, 15, 25);
    printf("%s\n", temp);
    free(temp);
    return 0;
}*/