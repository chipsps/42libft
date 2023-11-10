/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchi <pchi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:16:52 by pchi              #+#    #+#             */
/*   Updated: 2023/11/10 16:01:50 by pchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- && s1 && *s1++ == *s2++)
		;
	if (n > 0)
		return ((unsigned char *)(*--s1) - (unsigned char *)(*--s2));
	return (0);
}
/*return (n > 0) ? (*(unsigned char *)(--s1) - *(unsigned char *)(--s2)) : 0;*/