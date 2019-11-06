/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhastaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:35:52 by akhastaf          #+#    #+#             */
/*   Updated: 2019/10/22 18:55:44 by akhastaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			i;

	cdst = (unsigned char*)dst;
	csrc = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		if (csrc[i] == (unsigned char)c)
		{
			cdst[i] = csrc[i];
			return (cdst + i + 1);
		}
		cdst[i] = csrc[i];
		i++;
	}
	return (NULL);
}
