/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpototsc <mpototsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:18:51 by mpototsc          #+#    #+#             */
/*   Updated: 2023/10/04 14:46:53 by mpototsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int		i;
	int		count;
	char	*str;

	i = 0;
	count = 0;
	str = (char *)s;
	while (str && str[i])
	{
		while (str && str[i] == c)
			i++;
		str = &str[i];
		i = 0;
		while (str && str[i] && str[i] != c)
		{
			str = ft_strchr(str, c);
			count++;
		}
	}
	return (count);
}

static void	*freestr(char **str, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(str[j]);
		j++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		start;
	int		end;
	int		i;

	start = 0;
	i = 0;
	str = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (i < wordcount(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end] != '\0')
			end++;
		str[i] = ft_substr(s, start, (end - start));
		if (str[i] == NULL)
			return (freestr(str, i));
		start = end;
		i++;
	}
	str[i] = 0;
	return (str);
}
