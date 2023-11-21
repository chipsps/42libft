/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchi <pchi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:38:53 by pchi              #+#    #+#             */
/*   Updated: 2023/11/10 16:15:53 by pchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- && *(unsigned char *)s1++ == *(unsigned char *)s2++)
		;
	if (n > 0)
		return (*(unsigned char *)(--s1) - *(unsigned char *)(--s2));
	return (0);
}
