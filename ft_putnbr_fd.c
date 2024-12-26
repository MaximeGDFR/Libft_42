/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:29:41 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/26 14:06:44 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Writes an integer to a file descriptor.*/

/* 🇫🇷   Écrit un entier sur un descripteur de fichier.*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		if (n < 10)
		{
			c = n + '0';
			write(fd, &c, 1);
		}
	}
}

/*int main(void)
{
    ft_putnbr_fd(-2147483648, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(0, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(42, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(2147483647, 1);
    write(1, "\n", 1);
}*/