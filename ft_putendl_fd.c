/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:29:36 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/26 14:06:13 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Writes a string followed by a newline character to a file
		descriptor.*/

/* 🇫🇷   Écrit une chaîne de caractères suivie d'un saut de ligne sur un
		descripteur de fichier.*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	else
	{
		while (s[i] != '\0')
		{
			write (fd, &s[i], 1);
			i++;
		}
	}
	write (fd, "\n", 1);
}

/*int main()
{
    int fd = 1;
    char *message = "Hello, world!";
    
    ft_putendl_fd(message, fd);

    return (0);
}*/
