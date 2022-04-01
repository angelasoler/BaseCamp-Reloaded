/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 04:29:02 by asoler            #+#    #+#             */
/*   Updated: 2022/04/01 04:29:04 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *s)
{
	int		fd;
	char	*s1[1];

	fd = open(s, O_RDONLY);
	if (fd == -1)
		return ;
	else
		while (read(fd, s1, 1))
			write(1, s1, 1);
	close(fd);
}
