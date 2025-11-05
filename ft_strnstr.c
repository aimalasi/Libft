/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:41:38 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/03 20:27:56 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (*needle == '\0')
        return ((char *) haystack);
    if (len == 0)
        return (NULL);

    i = 0;
    while (haystack[i] != '\0' && i < len)
    {
        j = 0;
        while (needle[j] != '\0' && (i + j) < len && haystack[i + j] == needle[j])
        {
            j++;
        }
        if (needle[j] == '\0')
            return ((char *)(haystack + i));
        i++;
    }
    return (NULL);
}
/* int main(void)
{
    char *str = "Katerina";

    printf("%s\n", ft_strnstr(str, "rina", 8));
    printf("%s\n", ft_strnstr(str, "rina", 2));
    return ('0');
} */