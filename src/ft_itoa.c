/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:39:23 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/20 15:48:36 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count_step(int num)
{
	int	counter;

	counter = 0;
	if (num <= 0)
		num *= -1;
	while (num > 0)
	{
		counter++;
		num /= 10;
	}
	return (counter);
}

int	reverse_num(int num, int len)
{
	int	tmp;
	int	is_neg;

	is_neg = 0;
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
	return (tmp);
}

/* i: dizi start konumu
    	c: sayı uzunluğu
    	n: yazdırılacak sayı */
void	turn_str(int i, int c, int n, char *str)
{
	while (i < c)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	int		c;
	int		i;
	char	*str;

	i = 0;
	c = count_step(n);
	str = (char *)malloc(c + 1);
	if (!str)
		return (NULL);
	n = reverse_num(n, c);
	if (n < 0)
	{
		i++;
		n *= -1;
		str[0] = '-';
		c++;
	}
	turn_str(i, c, n, str);
	return (str);
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
