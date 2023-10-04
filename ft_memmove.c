/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpototsc <mpototsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:36:03 by mpototsc          #+#    #+#             */
/*   Updated: 2023/10/02 16:03:48 by mpototsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	if (src < dest)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
	{
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	return (dest);
}

/* int main()
{
	char str1[] = "Hello, World!";
	char str2[20];

	// Using ft_memmove to copy str1 to str2 with overlap
	ft_memmove(str2, str1, 13);

	// Print the result
	printf("str2 after ft_memmove: %s\n", str2);

	return 0;
} */