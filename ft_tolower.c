/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:27:48 by aimalasi          #+#    #+#             */
/*   Updated: 2025/10/24 19:31:07 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_tolower (int i)
{
    if (i >= 'A' && i <= 'Z')
        i = i + 32;
    return (i);
}

/* int   main (void)
{
    printf("%c\n", ft_tolower('T'));
    printf("%c\n", ft_tolower('1'));
    return (0);
} */