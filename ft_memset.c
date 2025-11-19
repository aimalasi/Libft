/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:09:45 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/18 22:24:32 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t;

	i = 0;
	t = (unsigned char *) s;
	while (i < n)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
/* int main(void)
{
	char *c = malloc(2);
	c[2] = 0;
	printf("%s\n", c);
	ft_memset(c, 'A', 3);
	printf("%s\n", c);
} */