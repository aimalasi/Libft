/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:07:42 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/14 15:28:18 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*t;

	i = 0;
	t = (unsigned char *)s;
	while (i < n)
	{
		t[i] = 0;
		i++;
	}
	return (t);
}

/* int main(void)
{
	char *c = malloc(3);
	c[0] = 'a';
	printf("%s\n", c);
	ft_bzero(c, 3);
	printf("%s\n", c);
} */