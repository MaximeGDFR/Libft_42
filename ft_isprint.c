/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:28:12 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 19:02:33 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Checks if the given character is a printable character (including
		space).*/

/* 🇫🇷   Vérifie si le caractère donné est un caractère imprimable
		(y compris l'espace).*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int c = ' ';
	int	result;

	result = ft_isprint(c);
	printf("%d\n", result);
	return (0);
}*/