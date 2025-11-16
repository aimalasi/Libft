/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:58:39 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/14 16:12:00 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	reverse(char str[], int length)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = length - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*handle_special(char *str, int n)
{
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	strcpy(str, "-2147483648");
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	str = (char *)malloc(count_digits(n) + 1);
	if (str == NULL)
		return (NULL);
	if ((n == 0) || (n == -2147483648))
		return (handle_special(str, n));
	sign = (n < 0);
	if (sign)
		n = -n;
	i = 0;
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign)
	{
		str[i++] = '-';
	}
	str[i] = '\0';
	reverse(str, i);
	return (str);
}
/* int main(void)
{
	char* result;

	result = ft_itoa(1234);
	printf("%s\n", result);
	free(result);
} */