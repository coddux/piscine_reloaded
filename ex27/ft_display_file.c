/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_file.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 14:00:47 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 14:39:30 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_util.h"

int	ft_display_file(char *str)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd(2, "open() error\n");
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret == -1)
		{
			ft_putstr_fd(2, "read() error\n");
			return (1);
		}
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_display_file(av[1]);
		return (0);
	}
	else
	{
		if (ac == 1)
			ft_putstr_fd(2, "File name missing.\n");
		else if (ac > 2)
			ft_putstr_fd(2, "Too many arguments.\n");
		return (1);
	}
}
