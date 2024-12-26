/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:27:54 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 19:02:20 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Checks if the given character is an alphabetic letter (a-z or A-Z).*/

/* 🇫🇷   Vérifie si le caractère donné est une lettre alphabétique (a-z
		ou A-Z).*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c == '\0')
		return (0);
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int c = '\0';
	int	result;

	result = ft_isalpha(c);
	printf("%d\n", result);
	return (0);
}*/