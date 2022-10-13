#include "libft.h"
#include "stdlib.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *temp;
    size_t i;
    size_t j;

    temp = (char *)malloc(len + 1);
    if (!s || !temp)
        return (0);
    i = start;
    j = 0;
    while (i < ft_strlen(s) && j < len)
        temp[j++] = s[i++];
    temp[j] = '\0';
    return (temp);
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