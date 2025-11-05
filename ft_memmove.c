/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 21:30:17 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/05 00:48:50 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    unsigned int i;

    s = (unsigned char *)src;
    d = (unsigned char *)dst;

    if (n == 0 || dst == src)
        return (dst);
    i = 0;
    if (s < d)
    {
        d = d + n;
        s = s + n;
        while (i < n)
        {
            d--;
            s--;
            *d = *s;
            i++;
        }
    }
    else
    {
        while(i < n)
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
