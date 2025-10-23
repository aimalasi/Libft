/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:43:26 by aimalasi          #+#    #+#             */
/*   Updated: 2025/10/23 18:10:49 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_isalpha(int i)
{
    if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
        return (1);
    return (0);
}

/*int   main (void)
{
    printf("%d\n", ft_isalpha('T'));
    printf("%d\n", ft_isalpha('1'));
    return (0);
}*/