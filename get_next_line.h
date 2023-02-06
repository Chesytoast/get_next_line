/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtin <mcourtin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:37:05 by mcourtin          #+#    #+#             */
/*   Updated: 2022/11/10 15:38:23 by mcourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

char	*ft_strjoin(char *s1, char *s2);
size_t	is_newline(char *str);
char	*ft_strncpy(char *src, char *dst, int len);
size_t	ft_strlen(const char *s);
size_t	ft_linelen(const char *s);
char	*get_next_line(int fd);
char	*ft_read(int fd, char *stash);
char	*ft_line(char *stash);
char	*ft_next_stash(char *stash);

#endif