/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:28:57 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 18:55:38 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Returns the last element of a linked list.*/

/* 🇫🇷   Retourne le dernier élément d'une liste chaînée.*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	if (lst == NULL)
		return (NULL);
	while (last->next != NULL)
	{
		last = last->next;
	}
	return (last);
}

/*int	main()
{
	t_list *head = NULL;

	t_list *last_content = ft_lstlast(head);
	if (last_content != NULL)
		printf("Le dernier element est : %s\n", (char *)last_content->content);
	else
	printf("La liste est vide.\n");
	return (0);
}*/
