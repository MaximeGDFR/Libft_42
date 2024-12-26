/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:26:46 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 19:03:43 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Creates a new element for a linked list, initializing it with the
		given content.*/

/* 🇫🇷   Crée un nouvel élément pour une liste chaînée, en l'initialisant
		avec le contenu donné.*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_content;

	new_content = (t_list *)malloc(sizeof(t_list));
	if (new_content == NULL)
		return (NULL);
	new_content->content = content;
	new_content->next = NULL;
	return (new_content);
}
