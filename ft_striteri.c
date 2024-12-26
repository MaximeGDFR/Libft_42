/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:30:10 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/26 14:09:45 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Applies a function to each character of a string, passing its
		index and content.*/

/* 🇫🇷   Applique une fonction à chaque caractère d'une chaîne de
		caractères, en passant son index et son contenu.*/

#include "libft.h"

/*int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}*/

/*void	my_function(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/*int main()
{
    char str [] = "Hello world !";
    ft_striteri(str, my_function);
    printf("%s\n", str);
    return (0);
}*/