/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 21:18:03 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/18 19:45:58 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = ft_strdup("\0");
		return (substr);
	}
	if (start + len > s_len)
		len = s_len - start;
	substr = (char *)ft_calloc((len + 1), sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}

// int main(void)
// {
// 	char *result;

// 	result = ft_substr("Hello World", 14, 5);
// 	printf("%s\n", result);
// 	free(result);
// }
