/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:26:25 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 18:53:53 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Deletes and frees all elements in a linked list, using a function to
		delete the content of each element.*/

/* 🇫🇷   Supprime et libère tous les éléments d'une liste chaînée, en utilisant
		une fonction pour supprimer le contenu de chaque élément.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*temp;

	current = *lst;
	temp = current;
	if (*lst == NULL)
		return ;
	while (current != NULL)
	{
		del(current->content);
		temp = current->next;
		free(current);
		current = temp;
	}
	*lst = NULL;
}
