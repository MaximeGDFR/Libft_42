/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:31:22 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/26 14:16:49 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Converts a character to lowercase, if it is an uppercase letter.*/

/* 🇫🇷   Convertit un caractère en minuscule, s'il est une lettre majuscule.*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	else
		return (c);
}

/*int main()
{
    int c = 'A';
    int result;

    result = ft_tolower(c);
    printf("%c\n", result);
    return (0);
}*/