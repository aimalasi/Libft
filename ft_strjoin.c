/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 22:32:27 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/05 23:04:24 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *joined;
    size_t  len1;
    size_t  len2;
    size_t  i;
    size_t  j;

    if (s1 == NULL || s2 == NULL)
        return (NULL);
    
    len1 = 0;
    while (s1[len1] != '\0')
        len1++;
    
    len2 = 0;
    while (s2[len2] != '\0')
        len2++;
    
    joined = (char *)malloc((len1 + len2 + 1));
    if (joined == NULL)
        return (NULL);
    
    i = 0;
    while (i < len1)
    {   
        joined[i] = s1[i];
        i++;
    }

    j = 0;
    while (j < len2)
    {
        joined[i + j] = s2[j];
        j++;
    }

    joined[i + j] = '\0';

    return (joined);    
}
/* int main(void)
{
    char *result;

    result = ft_strjoin("Hello", " World");
    printf("%s\n", result);
    free(result);
} */