#include "libft.h"
#include <stdlib.h>

// c dilinde bir integer'ı ascii'ye çeviren fonksiyon

int count_step(int num)
{
    int counter;

    counter = 0;
    if (num <= 0)
    {
        ++counter;
        num *= -1;
    }
    while (num > 0)
    {
        counter++;
        num /= 10;
    }
    return counter;
}

char *allocate_arr(int size)
{
    char *tmp;
    tmp = (char *)malloc(size + 1);
    if (!tmp)
        return NULL;
    return tmp;
}

int reverse_num(int num, int len)
{
    int tmp;

    tmp = 0;
    while (len > 0)
    {
        tmp *= 10;
        tmp = tmp + (num % 10);
        num /= 10;
        len--;
    }
    tmp * 10;
    tmp += num;
    return tmp;
}

char *ft_itoa(int n)
{
    char *str;
    int c;
    int i;

    i = 0;
    c = count_step(n) - 1;
    str = allocate_arr(n);
    if (n < 0)
    {
        i++;
        n *= -1;
        str[0] = '-';
    }
    printf("%d\n", n);
    n = reverse_num(n, c);
    printf("%d\n", n);
    while (i <= c)
    {
        str[i] = (n % 10) + '0';
        n /= 10;
        i++;
    }
    return str;
}

int main()
{
    int a = 123;
    // printf("%d", reverse_num(a,3));
    printf("%s", ft_itoa(a));
    return 0;
}