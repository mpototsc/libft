/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpototsc <mpototsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:18:59 by mpototsc          #+#    #+#             */
/*   Updated: 2023/10/04 19:33:23 by mpototsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s2len;

	s2len = ft_strlen(s2);
	if (s2len == 0)
		return ((char *)s1);
	while (*s1 && len >= s2len)
	{
		if (ft_strncmp(s1, s2, s2len) == 0)
		{
			return ((char *)s1);
		}
		s1++;
		len--;
	}
	return (NULL);
}
