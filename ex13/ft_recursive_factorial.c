/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 11:48:51 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 18:11:20 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb > 1) && (nb < 13))
	{
		return (nb * ft_recursive_factorial(nb - 1));
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
