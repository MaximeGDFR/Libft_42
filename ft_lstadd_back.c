/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:28:32 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/24 18:52:27 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Adds a new element at the end of a linked list.*/

/* 🇫🇷   Ajoute un nouvel élément à la fin d'une liste chaînée.*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int		i;
	t_list	*current;

	i = 0;
	current = *lst;
	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (current->next != NULL)
		{
			i++;
			current = current->next;
		}
		current->next = new;
	}
}

/*int main()
{
    t_list *head = NULL;
	t_list *new_content = ft_lstadd_back("Hello");

	ft_lstadd_back(&head, new_content);

	return (0);
}*/
