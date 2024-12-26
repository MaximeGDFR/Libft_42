/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:27:44 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 19:02:00 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Allocates memory for an array of nmemb elements, each of size size,
		and initializes the memory to zero.*/

/* 🇫🇷   Alloue de la mémoire pour un tableau de nmemb éléments, chacun de taille
		size, et initialise cette mémoire à zéro.*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
/*int main()
{
    int *array;
    int n = 10;
    int i = 0;
    array = (int *)ft_calloc(n, sizeof(int));

    while (i < n)
    {
        printf("array[%d] = %d\n", i, array[i]);
        i++;
    }

    free(array);
    return (0);
}*/