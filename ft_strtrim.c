/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpototsc <mpototsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:58:50 by mpototsc          #+#    #+#             */
/*   Updated: 2023/10/02 16:51:41 by mpototsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	firstpos(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i] && inset(s1[i], set))
		i++;
	return (i);
}

static int	lastpos(const char *s1, const char *set)
{
	int	i;

	i = ft_strlen(s1);
	while (i > 0 && inset(s1[i - 1], set))
		i--;
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		k;
	char	*s2;

	i = firstpos(s1, set);
	j = lastpos(s1, set);
	k = 0;
	s2 = malloc(sizeof(char) * ((lastpos(s1, set) - firstpos(s1, set)) + 1));
	if (s2 == 0)
		return (NULL);
	while (i < j)
	{
		s2[k] = s1[i];
		i++;
		k++;
	}
	return (s2);
}

/* int	main()
{
	char	*str;
	char	*set;

	set = "+-";
	str = "++--hello--++";
	printf("%s", ft_strtrim(str, set));
	return (0);
} */