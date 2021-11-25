/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:33:31 by vsedat            #+#    #+#             */
/*   Updated: 2021/11/25 11:33:35 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
int		ft_strlen(char *a);
int		ft_strlenn(char *a);
char	*ft_join(char *a, char *b);
int		ft_search(char *a, char c);
void	ft_cut(char *a);

#endif
