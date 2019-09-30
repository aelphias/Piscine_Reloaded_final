/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:57:51 by aelphias          #+#    #+#             */
/*   Updated: 2019/09/18 15:00:49 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	char			b[512];
	int				fdescr;
	unsigned int	fread;

	fread = 1;
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fdescr = open(argv[1], O_RDONLY);
		if (fdescr > 0)
		{
			while (fread > 0)
			{
				fread = read(fdescr, b, 512 - 1);
				b[fread] = '\0';
				write(1, b, fread);
			}
		}
		close(fdescr);
	}
	return (0);
}
