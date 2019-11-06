/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhastaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:06:47 by akhastaf          #+#    #+#             */
/*   Updated: 2019/10/23 18:04:37 by akhastaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		ft_getsize(int n)
{
	int				i;
	unsigned int	nb;

	i = 0;
	nb = n;
	if (n < 0)
	{
		nb = -n;
		i++;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i + 1);
}

char			*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	nb;

	nb = n;
	i = ft_getsize(n);
	if (!(str = malloc(sizeof(char) * i + 1)))
		return (NULL);
	str[i] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		nb = -n;
	}
	i--;
	while (nb >= 10 && i >= 0)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	if (nb <= 9)
		str[i] = nb + '0';
	return (str);
}
