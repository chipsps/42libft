/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchi <pchi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:21:17 by pchi              #+#    #+#             */
/*   Updated: 2023/11/16 14:52:37 by pchi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_split2(char *str, size_t num, size_t len)
{
	char	**av;
	size_t	i;
	size_t	j;

	av = ft_calloc((num + 1), sizeof(char *));
	if (!av)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && j < num)
	{
		if (i == 0 || str[i++ - 1] == '\0')
		{
			av[j++] = ft_strdup(&str[i++]);
			if (!av[j - 1])
			{
				while (j > 0)
					free(av[j-- - 1]);
				free(av);
				return (NULL);
			}
		}
	}
	return (av);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	char	*str;
	size_t	len;
	size_t	num;
	size_t	i;

	str = ft_strdup(s);
	len = ft_strlen(s);
	num = 0;
	i = -1;
	if (!str)
		return (NULL);
	while (++i < len)
	{
		if (str[i] == c)
			str[i] = '\0';
		else if (i == 0 || str[i - 1] == '\0')
			num++;
	}
	new = ft_split2(str, num, len);
	free(str);
	return (new);
}
