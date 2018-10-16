/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 09:59:51 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 18:03:24 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int f;

	i = 1;
	f = nb;
	if ((nb > 1) && (nb < 13))
	{
		while (i < nb)
		{
			f = f * i;
			i = i + 1;
		}
		return (f);
	}
	else if ((nb == 0) || (nb == 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
