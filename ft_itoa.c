/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpototsc <mpototsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:22:33 by mpototsc          #+#    #+#             */
/*   Updated: 2023/10/09 17:46:06 by mpototsc         ###   ########.fr       */
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
		i++;
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
	str = (char *)malloc(sizeof(char) * (len +1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
		str[0] = 48;
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[len--] = (num % 10) + 48;
		num = num / 10;
	}
	return (str);
}

/* int main()
{
	long int num = 0;

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