/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:22:20 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/14 20:28:50 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s, int n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(char *s1, int n);
char	*ft_strjoin(char **line, char *buff, int n);
int		ft_check_newline(char *buff, char **line);
int		ft_memorage(char **line, char *buff);
int		ft_buffcheck(char *buff, char **line);

#endif