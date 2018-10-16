/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_params.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 18:12:25 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 18:37:20 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j = j + 1;
			}
			ft_putchar('\n');
			i = i + 1;
		}
	}
	return (0);
}
