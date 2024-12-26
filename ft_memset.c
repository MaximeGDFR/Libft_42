/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:29:25 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 19:04:28 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Sets the first n bytes of the memory area pointed to by s to the
		given value.*/

/* 🇫🇷   Réinitialise les n premiers octets de la zone mémoire pointée par s
		à la valeur donnée.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int main()
{
    char array [10] = "abcdefghi";
    int i = 0;
    int n = 3;
    int c = 'X';

    ft_memset(array, c, n * sizeof(char));

    while (i < 10)
    {
        printf("%c", array[i]);
        i++;
    }
    printf("\n");

    return (0);
}*/