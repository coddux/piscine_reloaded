/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_util.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 14:31:19 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 14:39:51 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_UTIL_H
# define FT_UTIL_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUF_SIZE 4096

void	ft_putchar(char c);
int		ft_putstrlen(char *str);
void	ft_putstr(char *str);
void	ft_putstr_fd(int fd, char *str);
void	ft_putnbr(int n);
int		ft_display_file(char *str);

#endif
