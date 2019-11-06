/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhastaf <akhastaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:53:04 by akhastaf          #+#    #+#             */
/*   Updated: 2019/10/25 12:46:33 by akhastaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t lens;
	size_t i;

	i = 0;
	lens = ft_strlen(src);
	if (!size)
		return (lens);
	while (*dst && size)
	{
		dst++;
		i++;
		size--;
	}
	while (*src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	if (size != 0)
	{
		*dst = '\0';
	}
	return (lens + i);
}
