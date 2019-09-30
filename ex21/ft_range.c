/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 19:20:56 by aelphias          #+#    #+#             */
/*   Updated: 2019/09/15 22:25:28 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*rslt;
	int qn;
	int i;

	rslt = NULL;
	i = 0;
	if (min >= max)
		return (NULL);
	qn = max - min;
	rslt = (int*)malloc((qn) * sizeof(int));
	if (rslt == NULL)
		return (0);
	while (i <= qn)
	{
		rslt[i] = min;
		min++;
		i++;
	}
	return (rslt);
}
