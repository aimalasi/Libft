/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:17:02 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/14 17:45:36 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	char	*last;

	last = 0;
	res = (char *)s;
	while (*res != '\0')
	{
		if (*res == c)
			last = (char *)res;
		res++;
	}
	return (last);
}

/* int main (void)
{
	char *c = "Hello";
	printf("%s\n", c);
	char *s = ft_strrchr(c, 'l');
	printf("%s\n", s);
} */