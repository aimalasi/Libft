/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:28:47 by aimalasi          #+#    #+#             */
/*   Updated: 2025/10/26 22:24:16 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
   unsigned char    *str;
   unsigned char    chr;
   size_t   i;

   str = (unsigned char *)s;
   chr = (unsigned char )c;
   i = 0;
   while (i < n)
   {
        if (str[i] == chr)
            return (str + i);
        i++;
   }
   return (0);
}

/* int main (void)
{
    char *a = "Hello there!";
    char *result = ft_memchr(a, '!', 12);

    if (result)
        printf("%s\n", result);
    else
        printf("Character not found\n");
} */