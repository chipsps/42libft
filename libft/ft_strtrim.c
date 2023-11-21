/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchi <pchi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:21:17 by pchi              #+#    #+#             */
/*   Updated: 2023/11/15 12:39:43 by pchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	char	*start;
	char	*end;

	start = (char *)s1;
	end = start + ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (*start && ft_isset(*start, set))
		start++;
	while (start < end && ft_isset(*(end - 1), set))
		end--;
	new = ft_substr(start, 0, end - start);
	if (!new)
		return (NULL);
	return (new);
}
