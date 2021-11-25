/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:33:47 by vsedat            #+#    #+#             */
/*   Updated: 2021/11/25 11:33:58 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_free(char *a)
{
	free(a);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	buff[OPEN_MAX + 1][BUFFER_SIZE + 1];
	char		*txt;
	int			i;

	i = 1;
	txt = NULL;
	if (fd < 0 || BUFFER_SIZE == 0)
		return (0);
	if (ft_search(buff[fd], '\n') != -1)
	{
		ft_cut(buff[fd]);
		txt = ft_join(txt, buff[fd]);
		if (txt[0] == '\0')
				txt = ft_free(txt);
	}
	while (ft_search(buff[fd], '\n') == -1 && i > 0)
	{
		i = read(fd, buff[fd], BUFFER_SIZE);
		if (i <= 0)
			return (txt);
		buff[fd][i] = '\0';
		txt = ft_join(txt, buff[fd]);
	}
	return (txt);
}
