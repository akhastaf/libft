/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhastaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:45:50 by akhastaf          #+#    #+#             */
/*   Updated: 2019/10/13 15:02:04 by akhastaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = -n;
	}
	if (nbr <= 9)
	{
		c = '0' + nbr;
		write(fd, &c, 1);
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		c = nbr % 10 + '0';
		write(fd, &c, 1);
	}
}
