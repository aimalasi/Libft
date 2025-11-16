/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:29:24 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/14 15:36:11 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	ft_isalnum(int i)
{
	if (((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')))
		return (1);
	if ((i >= '0') && (i <= '9'))
		return (1);
	return (0);
}

/*int   main (void)
{
	printf("%d\n", ft_isalnum('\n'));
	printf("%d\n", ft_isalnum('1'));
	return (0);
}*/