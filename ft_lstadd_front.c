/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:28:39 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 18:53:02 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Adds a new element at the beginning of a linked list.*/

/* 🇫🇷   Ajoute un nouvel élément au début d'une liste chaînée.*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main()
{
	t_list *head = NULL;
	t_list *new_content = ft_lstnew("Hello");

	ft_lstadd_front(&head, new_content);

	return (0);
}*/
