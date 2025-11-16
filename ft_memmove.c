/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 21:30:17 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/14 17:12:03 by aimalasi         ###   ########.fr       */
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
	unsigned char		*d;
	const unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (n == 0 || dst == src)
		return (dst);
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
/* int main(void)
{
	char    src[] = "Katerina";
	char    dst[10];
	ft_memmove(dst, src, 8);
	printf("%s\n", dst);

	char    src2[] = "Katerina";
	char    dst2[10] = "Hello";
	ft_memmove(dst2, src2, 10);
	printf("\n");
	memmove(src2, dst2, 9);
	printf("%s\n", dst2);

	return 0;
} */
