/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:31:03 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/26 14:14:41 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Locates the first occurrence of a substring in a string, searching
		up to a given length.*/

/* 🇫🇷   Localise la première occurrence d'une sous-chaîne dans une chaîne,
		en cherchant jusqu'à une longueur donnée.*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main ()
{
    const char *big = "Hello, world!";
    const char *little = "world";
    size_t len = 14;

    char *result = ft_strnstr(big, little, len);

    if (result != NULL)
        printf("Finded little : %s\n", result);
    else
        printf("No result in %ld prints.", len);
    
    return (0);
}*/