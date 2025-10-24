/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:45:19 by aimalasi          #+#    #+#             */
/*   Updated: 2025/10/24 21:01:59 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_memcpy(void *dest, const void *src, size_t n)
 {
    int i;
    unsigned int *t;
    unsigned int *u;

    i = 0;
    t = (unsigned char*) dest;
    u = (unsigned char*) src;
    while (i < n)
    {
        t[i] = u[i];
        i++;
    }
    return (t);
 }

int main(void)
{
    char *c = malloc(3);
    c[3] = 0;
    printf("%s\n", c);
    ft_memcpy('ABC', 'CBA', 3);
    printf("%s\n", c);
}
