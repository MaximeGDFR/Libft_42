/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:31:27 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/26 14:17:24 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Converts a character to uppercase, if it is a lowercase letter.*/

/* 🇫🇷   Convertit un caractère en majuscule, s'il est une lettre minuscule.*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}

/*int main()
{
    int c = 'b';
    int result;

    result = ft_toupper(c);
    printf("%c\n", result);
    return (0);
}*/