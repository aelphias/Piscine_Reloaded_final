/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:39:22 by aelphias          #+#    #+#             */
/*   Updated: 2019/09/17 14:04:31 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int letter;
	int a;

	letter = 0;
	a = 1;
	if (argc == 1)
		return (0);
	while (argv[a][letter] != '\0')
	{
		ft_putchar(argv[a][letter]);
		letter++;
		if ((argv[a][letter] == '\0') && a < argc - 1)
		{
			ft_putchar('\n');
			a++;
			letter = 0;
		}
	}
	ft_putchar('\n');
	return (0);
}
