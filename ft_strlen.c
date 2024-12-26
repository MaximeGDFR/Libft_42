/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:30:43 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/26 14:12:15 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Returns the length of a string.*/

/* 🇫🇷   Retourne la longueur d'une chaîne de caractères.*/

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*int main(void)
{
    char str[] = "Hello world !";

    printf("%d", ft_strlen(str));
    return(0);
}*/
