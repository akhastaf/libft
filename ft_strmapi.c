/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhastaf <akhastaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 00:36:44 by akhastaf          #+#    #+#             */
/*   Updated: 2019/10/24 19:44:32 by akhastaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*src;
	int		i;

	src = (char*)s;
	if (!src)
		return (NULL);
	if (!(str = malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = f((unsigned int)i, src[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
