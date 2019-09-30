/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:14:18 by aelphias          #+#    #+#             */
/*   Updated: 2019/09/18 19:02:47 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*rslt;
	int		length;
	int		i;

	i = 0;
	length = ft_strlen(src);
	rslt = (char*)malloc((length + 1) * sizeof(char));
	if (rslt == NULL)
		return (0);
	while (i < length)
	{
		rslt[i] = src[i];
		i++;
	}
	rslt[i] = '\0';
	return (rslt);
}
