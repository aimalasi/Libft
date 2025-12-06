/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 21:30:17 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/23 22:31:19 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_backward(unsigned char *d, const unsigned char *s, size_t n)
{
	d = d + n;
	s = s + n;
	while (n--)
	{
		d--;
		s--;
		*d = *s;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	if (s < d)
	{
		copy_backward(d, s, n);
	}
	else
	{
		while (i < n)
		{
			*d = *s;
			d++;
			s++;
			i++;
		}
	}
	return (dst);
}

// int main(void)
// {
// char    *src = NULL;

// memmove(src, src, 8);
// ft_memmove(src, src, 8);
// printf("11111111");

// ft_memmove(dst, src, 10);
// printf("%s\n", dst);

// char    src2[8] = "Katerina";

// ft_memmove(src2 + 3, src2, 5);
// printf("%s\n", src2);

// char    src3[8] = "Katerina";

// ft_memmove(src3, src3 + 3, 5);
// printf("%s\n", src3);
// return (0);
// }
