/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhastaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 02:07:06 by akhastaf          #+#    #+#             */
/*   Updated: 2019/10/20 17:53:47 by akhastaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*str;

	str = (char*)s;
	len = ft_strlen(str);
	if (!c)
		return (str + len);
	while (len >= 0)
	{
		if (str[len] == c)
			return (str + len);
		len--;
	}
	return (NULL);
}
