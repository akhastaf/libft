/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhastaf <akhastaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:10:56 by akhastaf          #+#    #+#             */
/*   Updated: 2019/10/24 20:41:19 by akhastaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen((char*)src));
	i = 0;
	while (i < size - 1 && src[i])
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	((char*)dst)[i] = '\0';
	return (ft_strlen(((char*)src)));
}
