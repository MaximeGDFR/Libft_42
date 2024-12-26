/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:28:06 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 18:49:38 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Checks if the given character is a digit (0-9).*/

/* 🇫🇷   Vérifie si le caractère donné est un chiffre (0-9).*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c == '\0')
		return (0);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int c = 'a';
	int	result;

	result = ft_isdigit(c);
	printf("%d\n", result);
	return (0);
}*/