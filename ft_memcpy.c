/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:45:19 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/19 21:34:18 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*t;
	unsigned char	*u;

	i = 0;
	t = (unsigned char *) dest;
	u = (unsigned char *) src;
	while (i < n)
	{
		t[i] = u[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char *c = malloc(4);
// 	printf("%s\n", c);
// 	ft_memcpy(c, "CasdBA", 3);
// 	printf("%s\n", c);
// 	free(c);
// }
