/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:11:56 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/14 17:23:34 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (s == 0)
		return (0);
	len = ft_strlen(s);
	write(fd, s, len);
}
/* int main(void)
{
	ft_putstr_fd("Hello world!", 1);

	return 0;
} */