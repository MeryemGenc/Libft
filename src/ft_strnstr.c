#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t a;
    size_t b;

    if (!little[0])
        return ((char *)big);
    a = 0;
    while (big[a])
    {
        b = 0;
        while (big[a + b] == little[b] && a + b < len)
        {
            if (!big[a + b] || !little[b])  /* || ==> &&  */
            {
                return ((char *)big + a);
            }
            b++;
        }
        if (!little[b])
        {
            return ((char *)big + a);
        }
        a++;
    }
    return (0);
}

/*
int main()
{
    char a[] = "hgfdqwertyu";
    char b[] = "qwer";

    printf("%s", ft_strnstr(a, b, 15));
    return 0;
} */