/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:58:39 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/09 22:27:29 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void reverse(char str[], int length)
{
    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

static int count_digits(int n)
{
    int count = 0;
    if (n == 0)
        return (1);
    if (n < 0)
        count++;
    while (n != 0)
    {    n = n / 10;
        count++;
    }
    return count;
}
char *ft_itoa(int n)
{
    int len = count_digits(n);
    char* str = (char*)malloc(len + 1);
    
    if (str == NULL)
        return (NULL);
    
    int i = 0;
    int sign = 0;

    if (n == 0)
    {
        str[i] = '0';
            i++;
        str[i] = '\0';
        return str;
    }
    if (n < 0)
    {
        sign = 1;
        if (n == -2147483648)
        {
            strcpy(str, "-2147483648");
            return str;
        }
        n = -n;
    }
    while (n != 0)
    {
        str[i] = (n % 10) + '0';
        i++;
        n = n / 10;
    }
    if (sign)
    {
        str[i] = '-';
        i++;
    }
    str[i] = '\0';
    reverse(str, i);
    return str;
}
int main(void)
{
    char* result;

    result = ft_itoa(1234);
    printf("%s\n", result);
    free(result);
}