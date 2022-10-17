#include "libft.h"
#include <stdlib.h>

// c dilinde bir integer'ı ascii'ye çeviren fonksiyon

int count_step(int num)
{
    int counter;

    counter = 0;
    if (num <= 0)
        num *= -1;
    while (num > 0)
    {
        counter++;
        num /= 10;
    }
    return counter;
}

int reverse_num(int num, int len)
{
    int tmp;
    int is_neg = 0;

    tmp = 0;
    if (num < 0)
    {
        is_neg = 1;
        num *= -1;
    }
    while (len > 0)
    {
        tmp = (tmp * 10) + (num % 10);
        num /= 10;
        len--;
    }
    tmp += num;
    if (is_neg == 1)
        tmp *= -1;
    return tmp;
}

void turn_str(int i, int c, int n, char *str)
{
    // i: dizi start konumu
    // c: sayı uzunluğu
    // n: yazdırılacak sayı
    while (i < c)
    {
        str[i++] = (n % 10) + '0';
        n /= 10;
    }
    str[i] = '\0';
}

char *ft_itoa(int n)
{
    char *str;
    int c;
    int i;

    i = 0;
    c = count_step(n); // basamak deger
    str = (char *)malloc(c + 1);
    if (!str)
        return NULL;
    n = reverse_num(n, c); // daha kolay yazdırmak icin
    if (n < 0)
    {
        i++;
        n *= -1;
        str[0] = '-';
        c++;
    }
    turn_str(i, c, n, str);
    return str;
}

/*
int main()
{
    int a = -4123453;
    char *b;
    b = ft_itoa(a);
        // printf("%d", count_step(a));
        // printf("%d", reverse_num(a, 3));
        printf("%s", b);
    return 0;
} */