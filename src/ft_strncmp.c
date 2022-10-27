/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:07:39 by mgencali          #+#    #+#             */
/*   Updated: 2022/10/27 14:09:10 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	--n;
	while ((unsigned char)s1[a] == (unsigned char)s2[a]
		&& s1[a] && s2[a] && a < n)
	{
		a++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
/*
int main()
{
    char a[] = "qwertyu";
    char b[] = "qwer";

    printf("%d", ft_strncmp(b, a, 5));
    return 0;
}*/
