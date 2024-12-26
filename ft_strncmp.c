/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:30:53 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/26 14:13:22 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Compares two strings up to a specified number of characters.*/

/* 🇫🇷   Compare deux chaînes de caractères jusqu'à un nombre spécifié
		de caractères. */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*int main()
{
    char s1 [] = "abcdef";
    char s2 [] = "abcdefghijkl";
    unsigned int n;

    n = 17;
    int result_a = ft_strncmp(s1, s2, n);
    int result_b = strncmp(s1, s2, n);

    printf("%d %d\n", result_a, result_b);
    return (0);
}*/
