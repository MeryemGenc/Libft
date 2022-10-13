#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long int num;

    num = n;
    if (num < 0)
    {
        write(fd, "-", 1);
        num = (num * -1);
    }
    if (num >= 10)
    {
        ft_putnbr_fd(num / 10, fd);
        ft_putchar_fd((num % 10) + '0', fd);
    }
    else
    {
        ft_putchar_fd(num + '0', fd);
    }    
}