/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:29:20 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 19:04:12 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Copies n bytes from the source memory area to the destination
		memory area.*/

/* 🇫🇷   Copie n octets de la zone mémoire source vers la zone mémoire
		de destination.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

/*int main()
{
    char dest[10] = "xxxxxxxxx";
    char src[] = "A123456789";
    
    void *rtn = ft_memcpy(dest, src, 1);
    printf("Test : %s\n", dest);
    printf("Retour : %p\n", rtn);
    printf("Expected: %p\n", dest);

    return (0);
}*/