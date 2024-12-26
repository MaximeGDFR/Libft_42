/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:27:31 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 18:45:05 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Converts a string to an integer, ignoring leading whitespaces and
		stopping when encountering a non-digit character.*/

/* 🇫🇷   Convertit une chaîne de caractères en un entier, en ignorant les espaces
		blancs initiaux et en s'arrêtant dès qu'un caractère non numérique est
		rencontré.*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i +1] == '-' || nptr[i + 1] == '+')
			return (0);
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

/*int main()
{
    char nptr[] = "+-54";

    printf("%d\n", ft_atoi(nptr));
	printf("%d\n", atoi(nptr));
    return (0);
}*/
