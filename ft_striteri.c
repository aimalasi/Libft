/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimalasi <aimalasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:09:02 by aimalasi          #+#    #+#             */
/*   Updated: 2025/11/13 16:35:42 by aimalasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (s == NULL || f == NULL)
        return;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

void	f(unsigned int i, char *s)
{
	printf("Indice %d: %c\n", i, *s);
}

/* int	main(void)
{
	char	s[] = "Hello World";

	ft_striteri(s,f);

	return (0);
} */