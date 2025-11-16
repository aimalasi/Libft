/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:50:21 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/14 15:40:51 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int i)
{
	if ((i >= '0') && (i <= '9'))
		return (1);
	return (0);
}

/*int main(void)
{
	printf("%d\n", ft_isdigit('T'));
	printf("%d\n", ft_isdigit('1'));
	return (0);
}*/