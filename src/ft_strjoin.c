#include "libft.h"
#include "stdlib.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *temp;
    int s2len;
    int s1len;

    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    temp = (char *)malloc( (s1len + s2len + 1) * sizeof(*s1));
    temp[0] = '\0';
    ft_strlcat(temp, s1, s1len + 1);
    ft_strlcat(temp+s1len, s2, s2len + 1);
    return temp;
}

// char *ft_strjoin(char const *s1, char const *s2)
// {
//     char *temp;
//     int i;
//     int j;

//     j = 0;
//     i = 0;
//     temp = (char *)malloc(sizeof(*s1) + sizeof(*s2) + 2);
//     if (!temp)
//         return (NULL);
//     while (s1[i])
//     {
//         temp[i] = s1[i];
//         i++; // sonradan bunu ++ ile ust satira ekle
//     }
//     while (s2[j])
//     {
//         temp[i] = s2[j];
//         j++;
//         i++; // sonradan bunu ++ ile ust satira ekle
//     }
//     temp[i] = '\0';
//     return temp;
// }


int main()
{
    char a[] = "hello_people";
    char b[] = "how are you?";
    char *temp = ft_strjoin(a, b);
    printf("%s", temp);
    free(temp);
    return 0;
}