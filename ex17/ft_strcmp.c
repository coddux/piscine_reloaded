/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 17:48:07 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 18:27:01 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if ((s1[i] != '\0') || (s2[0] != '\0'))
	{
		while (i < ft_strlen(s1))
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
			i = i + 1;
		}
	}
	return (0);
}
