/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 11:19:26 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 11:33:48 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	if (min < max)
	{
		if (!(tab = malloc(sizeof(int*) * (max - min))))
			return (0);
		i = 0;
		while (min < max)
		{
			tab[i] = min;
			min = min + 1;
			i = i + 1;
		}
		return (tab);
	}
	else
		return (0);
}
