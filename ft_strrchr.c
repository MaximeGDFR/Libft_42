/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:31:08 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/26 14:15:10 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Locates the last occurrence of a character in a string.*/

/* 🇫🇷   Localise la dernière occurrence d'un caractère dans une chaîne de
		caractères.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*occ;

	i = 0;
	occ = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			occ = (char *)(s + i);
		i++;
	}
	if (s[i] == (unsigned char)c)
		occ = (char *)(s + i);
	return (occ);
}

/*int main()
{
    const char *str = "teste";
    char ch = '\0';
    char *result = ft_strrchr(str, ch);
    
    if (result != NULL)
        printf("Last '%c' est a la position : %ld\n", ch, result - str);
    else
        printf("Le caractere '%c' n'a pas ete trouve.\n", ch);
    return (0);
}*/