/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 09:03:20 by arojas-a          #+#    #+#             */
/*   Updated: 2024/06/10 09:15:55 by arojas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;
	int	diff;

	if (min >= max)
		return (NULL);
	diff = max - min;
	dest = malloc(sizeof(int) * diff);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < diff)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
