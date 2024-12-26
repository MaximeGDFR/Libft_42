/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:30:05 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/26 14:09:02 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Duplicates a string by allocating memory and copying the content.*/

/* 🇫🇷   Duplique une chaîne de caractères en allouant de la mémoire et
		en copiant le contenu.*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*dup;

	i = 0;
	size = ft_strlen((char *)s) + 1;
	dup = (char *)malloc(size * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (i < size)
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}

/*int main()
{
    char s [] = "Hello world !";
    char *result;

    result = ft_strdup(s);
    printf("Src : %s\n", s);
    printf("Copy : %s\n", result);
    free(result);
    return (0);
}*/