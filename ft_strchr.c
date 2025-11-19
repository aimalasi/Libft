/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 19:48:02 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/18 22:32:13 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;

	res = (char *)s;
	while ((unsigned char)*res != (unsigned char)c && *res != '\0')
		res++;
	if ((unsigned char)*res == (unsigned char)c)
		return (res);
	return (NULL);
}
/* int main (void)
{
	char *c = "Hello";
	printf("%s\n", c);
	char *s = ft_strchr(c, 'e');
	printf("%s\n", s);
} */
