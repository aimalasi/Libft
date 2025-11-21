/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:17:02 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/21 18:49:15 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = 0;
	while (s[size])
		size++;
	while (size >= 0)
	{
		if (s[size] == (char)c)
			return ((char *)&s[size]);
		size--;
	}
	return (NULL);
}

/*int main (void)
{
	printf("%s\n", ft_strrchr("Hello", 1024));
	printf("%s\n", strrchr("Hello", 1024));

}*/