/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:29:10 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 19:03:53 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Searches for the first occurrence of a given byte in a memory area.*/

/* 🇫🇷   Recherche la première occurrence d'un octet donné dans une zone
		mémoire.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s1;
	unsigned char		c1;

	i = 0;
	s1 = (const unsigned char *)s;
	c1 = (unsigned char)c;
	while (i < n)
	{
		if (s1[i] == c1)
			return ((void *)&s1[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
    char str [] = "Hello world";
    char ch = 'w';
    size_t n = 12;

    char *result1 = memchr(str, ch, n);
    printf("Standard memchr : %s\n", result1);
    
    char *result2 = ft_memchr(str, ch, n);
    printf("ft_memchr : %s\n", result2);

    return (0);
}*/
