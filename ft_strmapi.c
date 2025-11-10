/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 22:48:49 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/10 00:04:04 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi (char const *s, char (*f) (unsigned int, char))
{
    char *result;
    unsigned int i;

    if (s == NULL || f == NULL)
        return (NULL);
    result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (result == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}
static char strmapi_tester(unsigned int i, char c)
{
    return (1 + c);
}

int main(void)
{
   printf("%s\n", ft_strmapi("teste", &strmapi_tester));
   return (0);
}