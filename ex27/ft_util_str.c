/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_util_str.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 14:34:48 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 16:05:19 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_util.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_fd(int fd, char c)
{
	write(fd, &c, 1);
}

int		ft_putstrlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}

void	ft_putstrfd(int fd, char *str)
{
	write(fd, str, ft_putstrlen(str));
}
