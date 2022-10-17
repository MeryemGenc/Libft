#include "libft.h"
#include <stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int a;

    a = 0;
    if (!s || !f)
        return ; // gerek var mi?
    while (s[a])
    {    
        f(a, s + a);
        a++;
    }
}