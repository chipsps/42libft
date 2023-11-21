/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchi <pchi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:21:17 by pchi              #+#    #+#             */
/*   Updated: 2023/11/19 16:47:11 by pchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n, int base)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n && i++)
		n /= base;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	const char	*digits;

	*digits = "0123456789";
	i = ft_numlen(n, 10);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i] = 0;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n)
	{
		str[--i] = digits[n % 10];
		n /= 10;
	}
	return (str);
}
