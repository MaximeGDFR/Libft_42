/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:27:59 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 18:50:22 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Checks if the given character is an ASCII character.*/

/* 🇫🇷   Vérifie si le caractère donné est un caractère ASCII.*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int c = ' ';
	int	result;

	result = ft_isascii(c);
	printf("%d\n", result);
	return (0);
}*/