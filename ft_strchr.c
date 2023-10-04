/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpototsc <mpototsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:40:51 by mpototsc          #+#    #+#             */
/*   Updated: 2023/10/03 17:29:34 by mpototsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	if (!c && str[i] == '\0')
		return ((char *) str + i);
	return (NULL);
}

/* int	main()
{
	char	*str;
	int		x;

	str = "e,e,r,";
	x = 'p';
	printf("%s", strchr(str, x));
	return (0);

} */