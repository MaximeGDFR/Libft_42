/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:31:18 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/26 14:16:16 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Extracts a substring from a string, starting at a given index and
		with a given length.*/

/* 🇫🇷   Extrait une sous-chaîne d'une chaîne de caractères, en commençant
		à un index donné et avec une longueur spécifiée.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len_s;
	size_t	i;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}

/*int main()
{
    char const s [] = "Hello world !";
    unsigned int start = 2;
    size_t len = 5;
    char *result;

    result = ft_substr(s, start, len);
    printf("Src : %s\nSub : %s\n", s, result);
    free(result);
    return (0);
}*/