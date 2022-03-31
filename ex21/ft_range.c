/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:45:13 by asoler            #+#    #+#             */
/*   Updated: 2022/03/30 15:39:16 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
	{
		range = (int *)0;
		return (range);
	}
	i = 0;
	size = (min * (-1)) + max;
	range = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
