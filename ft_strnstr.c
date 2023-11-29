/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchi <pchi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:16:52 by pchi              #+#    #+#             */
/*   Updated: 2023/11/29 19:39:53 by pchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (len == 0 && (big == NULL || little == NULL))
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && ft_strlen(little) <= len--)
	{
		if (!ft_strncmp(big, little, ft_strlen(little)))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
