/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 23:37:54 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/18 21:18:22 by aimalasi         ###   ########.fr       */
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

static	size_t	segment_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*get_segment(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*segm;

	len = segment_len(s, c);
	segm = malloc(len + 1);
	if (segm == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		segm[i] = s[i];
		i++;
	}
	segm[i] = '\0';
	return (segm);
}

static void	*free_all(char **arr, size_t i)
{
	while (i--)
		free(arr[i]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;

	if (s == NULL)
		return (NULL);
	result = malloc(sizeof(char *) * (count_segments(s, c) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			result[i] = (get_segment(s, c));
			if (result[i] == NULL)
				return (free_all(result, i));
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

	result = ft_split("Hello wold test", 'l');

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

	return (0);
} */
