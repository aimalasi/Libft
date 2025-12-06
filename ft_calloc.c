/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 19:12:26 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/23 22:04:43 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;

	if (size && nmemb >= ((size_t) - 1) / size)
		return (NULL);
	out = malloc(nmemb * size);
	if (!out)
		return (NULL);
	ft_bzero(out, nmemb * size);
	return (out);
}

/* int	main(void)
{
	int	i;
	int	*array;	i = -1;
	array = ft_calloc(5, sizeof(int));
	if (!array)
	{
		printf("...\n");
		return (0);
	}
	while (++i < 5)
		printf("%d\n", array[i]);
	return (0);
} */