/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:35:39 by aimalasi          #+#    #+#             */
/*   Updated: 2025/10/24 19:27:03 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_toupper(int i)
{
    if (i >= 'a' && i <= 'z')
        i = i - 32;
    return (i);
}

/* int   main (void)
{
    printf("%c\n", ft_toupper('t'));
    printf("%c\n", ft_toupper('1'));
    return (0);
} */