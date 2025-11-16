/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 23:37:54 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/14 17:29:12 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_segments(char const *s, char c)
{
	size_t	count;
	size_t	in_segment;

	count = 0;
	in_segment = 0;
	while (*s)
	{
		if (*s != c && !in_segment)
		{
			in_segment = 1;
			count++;
		}
		else if (*s == c)
			in_segment = 0;
		s++;
	}
	return (count);
}

static size_t	segment_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*segment_dup(char const *s, size_t len)
{
	char	*segment;
	size_t	i;

	segment = (char *)malloc(len + 1);
	if (segment == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		segment[i] = s[i];
		i++;
	}
	segment[i] = '\0';
	return (segment);
}

static void	free_split(char **split, size_t segments)
{
	size_t	i;

	i = 0;
	while (i < segments)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	segments;
	size_t	i;

	if (s == NULL)
		return (NULL);
	segments = count_segments(s, c);
	result = (char **)malloc(sizeof(char *) * (segments + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			result[i] = segment_dup(s, segment_len(s, c));
			if (result[i] == NULL)
			{
				free_split(result, i);
				return (NULL);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}
/* int main(void)
{
	char **result;
	int i;

	result = ft_split("Hello wold test", ' ');

	i = 0;
	while (result[i])
	{
		printf("[%d]> \"%s\"\n", i, result[i]);
		i++;
	}
	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);

	return 0;
} */