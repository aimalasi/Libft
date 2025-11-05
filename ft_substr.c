/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 21:18:03 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/05 22:29:18 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t s_len;

    if (s == NULL)
        return (NULL);

    s_len = 0;
    while (s[s_len] != '\0')
        s_len++;
    if (start >= s_len)
    {
        substr = (char *)malloc(1);
        if (substr == NULL)
            return (NULL);
        substr[0] = '\0';
        return (substr);
    }
    if (start + len > s_len)
        len = s_len - start;
    
    substr = (char*)malloc((len + 1) * sizeof(char));
    if (substr == NULL)
        return (NULL);

    i = 0;
    while (i < len && s[start + i] != '\0')
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';

    return (substr);
}
/* int main(void)
{
    char *result;

    result = ft_substr("Hello World", 6, 5);
    printf("%s\n", result);
    free(result);
} */