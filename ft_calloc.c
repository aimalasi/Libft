/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 19:12:26 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/18 22:27:04 by aimalasi         ###   ########.fr       */
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
