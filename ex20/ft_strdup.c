/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:30:10 by asoler            #+#    #+#             */
/*   Updated: 2022/03/30 16:39:34 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * size);
	while (*src)
	{
		dup[i] = *src;
		i++;
		src++;
	}
	dup[i] = *src;
	return (dup);
}
