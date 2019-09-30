/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:16:02 by aelphias          #+#    #+#             */
/*   Updated: 2019/09/22 22:29:49 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i <= 46340)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
