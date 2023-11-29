/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchi <pchi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:21:17 by pchi              #+#    #+#             */
/*   Updated: 2023/11/28 18:14:54 by pchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digitcount(int n)
{
	size_t	i;

	i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		neg;
	char	*res;

	i = (n <= 0) + digitcount(n);
	neg = n < 0;
	res = malloc(sizeof(char) * i);
	if (!res)
		return (NULL);
	res[0] = '-';
	res[--i] = '\0';
	if (!neg)
		n *= -1;
	while (--i >= neg)
	{
		res[i] = (n % 10 * -1) + '0';
		n /= 10;
	}
	return (res);
}
