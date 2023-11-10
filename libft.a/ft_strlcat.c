/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchi <pchi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:16:52 by pchi              #+#    #+#             */
/*   Updated: 2023/11/10 19:57:45 by pchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
//hello, ah, 20
{
	size_t	i;

	i = 0;
	while (i < size && *dst)
	{
		i++;
		dst++;
	}
	return (ft_strlcpy(dst, src, size - i) + i);
}
//		loopout i = 5, ft_strlcpy() = 2, return = 7
