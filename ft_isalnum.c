/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:27:48 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 19:02:13 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Checks if the given character is alphanumeric (i.e., a letter or
		a digit).*/

/* 🇫🇷   Vérifie si le caractère donné est alphanumérique (c'est-à-dire une
		lettre ou un chiffre).*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c == '\0')
		return (0);
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int c = ' ';
	int	result;

	result = ft_isalnum(c);
	printf("%d\n", result);
	return (0);
}*/