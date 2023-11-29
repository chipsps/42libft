/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchi <pchi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:38:53 by pchi              #+#    #+#             */
/*   Updated: 2023/11/29 19:21:09 by pchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*start;

	start = dest;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
		while (n--)
			*(char *)(dest + n) = *(char *)(src + n);
	else
		ft_memcpy(dest, src, n);
	return (start);
}
