/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchi <pchi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:38:53 by pchi              #+#    #+#             */
/*   Updated: 2023/11/09 15:01:42 by pchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest <= src)
		while (n--)
			*(char *)dest++ = *(char *)src++;
	else
	{
		dest += n;
		src += n;
		while (n--)
			*(char *)--dest = *(char *)--src;
	}
	return (dest);
}
/*
int	main(void)
{
	char	a[] = "123456";
	char	b[] = "4567";
//	const char	*src = "hello";
	int	n = 5;

	printf("%s\n", (char *)ft_memmove(a, b, n));
	return (0);
}*/
