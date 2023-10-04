/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpototsc <mpototsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:43:57 by mpototsc          #+#    #+#             */
/*   Updated: 2023/10/04 13:49:49 by mpototsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (src[len] != 0)
		len++;
	if (size != 0)
	{
		while (src[i] != 0 && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (len);
}
