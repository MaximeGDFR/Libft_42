/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:30:01 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/26 14:08:24 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Locates the first occurrence of a character in a string.*/

/* 🇫🇷   Localise la première occurrence d'un caractère dans une chaîne de
		caractères.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (0);
}

/*int main() {
    const char *str = "Hello, world!";
    char ch = 'o';
    
    char *result = strchr(str, ch);
    
    if (result != NULL)
    {
        printf("'%c' a ete trouve a la position : %ld\n", ch, result - str);
    }
    else
    {
        printf("Le caractere '%c' n'a pas ete trouve.\n", ch);
    }
    
    return (0);
}*/