/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:11:42 by aimalasi          #+#    #+#             */
/*   Updated: 2025/10/26 20:03:27 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int num;
    int sign;
    int i;

    num = 0;
    sign = 1;
    i = 0;
    if ((*nptr >= 9 && *nptr <= 13) || (*nptr == 32))
        nptr++;
    if ((*nptr == '-') || (*nptr == '+'))
    {
        if (*nptr == '-')
        {
            sign = -1;
        }
        nptr++;
    }
    while (*nptr >= '0' && *nptr <= '9')
    {
        num = (num * 10) + (*nptr - '0');
        nptr++;
    }
    return (num * sign);
}

/* int main(void)
{
    char *a = "-123";
    
    printf("%d\n", atoi(a));
    printf("%d\n", ft_atoi(a));
    return 0;
} */