/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:51:34 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/13 15:22:24 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_isinset(char c, char const *set)
{
    size_t  i;

    i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    char *trimmed;
    size_t start;
    size_t end;
    size_t i;

    if (s1 == NULL || set == NULL)
        return (NULL);
    
    start = 0;
    while (s1[start] != '\0' && ft_isinset(s1[start], set))
        start++;

    end = 0;
    while (s1[end] != '\0')
        end++;
    
    while (end > start && ft_isinset(s1[end - 1], set))
        end--;
    
    trimmed = (char *)malloc(end - start +1);
    if (trimmed == NULL)
        return (NULL);

    i = 0;
    while (start < end)
    {
        trimmed[i] = s1[start];
        i++;
        start++;
    }
    trimmed[i] = '\0';

    return (trimmed);    
}
int main(void)
/* {
    char *result;

    result = ft_strtrim("xxxxHelloxxx", "x");
    printf("%s\n", result);
    free(result);
} */