/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpototsc <mpototsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:22:33 by mpototsc          #+#    #+#             */
/*   Updated: 2023/10/02 16:18:10 by mpototsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
	}
	n = n / 10;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t		len;
	long int	num;
	char		*str;

	num = n;
	len = intlen(n);
	if (n < 0)
	{
		num = -n;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len +1));
	if (str == NULL)
		return (NULL);
	str[len + 1] = '\0';
	while (len >= 0)
	{
		str[len] = num % 10 + 48;
		num = num / 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/* int main()
{
	long int num = -12345;

	char *str = ft_itoa(num);

	if (str)
	{
		printf("Integer: %ld\n", num);
		printf("String: %s\n", str);

		free(str);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return 0;
}
 */