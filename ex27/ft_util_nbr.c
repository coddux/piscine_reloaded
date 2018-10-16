/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_util_nbr.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 14:37:28 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 16:06:04 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_util.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
		}
		ft_putchar((n % 10) + '0');
	}
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int n;

	i = 0;
	neg = 1;
	n = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\r')
			|| (str[i] == '\v') || (str[i] == ' ') || (str[i] == '\f'))
		i = i + 1;
	if (str[i] == '-')
		neg = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i = i + 1;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		n = n * 10;
		n = n + str[i] - '0';
		i = i + 1;
	}
	return (neg * n);
}
