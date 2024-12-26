/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:27:39 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 19:01:46 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Sets the first n bytes of the memory area pointed to by s to zero.*/

/* 🇫🇷   Réinitialise les n premiers octets de la zone mémoire pointée par
		s à zéro.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

/*int main()
{
    int array [5] = {0, 1, 2, 3, 4};
    int i = 0;
    int n = 3;

    ft_bzero(array, n * sizeof(int));

    while (i < 5)
    {
        printf("%d", array[i]);
        i++;
    }
    printf("\n");
    return (0);
}*/