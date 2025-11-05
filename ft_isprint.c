/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:35:25 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/03 19:31:15 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_isprint (int i)
{
    if (i >= 32 && i <= 126)
        return (1);
    return (0);
}

/*int main(void)
{
    printf("%d\n", ft_isprint('T'));
    printf("%d\n", ft_isprint('\n'));
    return (0);
}*/