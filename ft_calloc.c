/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 19:12:26 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/21 20:51:31 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*out;
	size_t	i;

	out = malloc(nmemb * size);
	if (out == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
		out[i++] = '\0';
	return ((void *)out);
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