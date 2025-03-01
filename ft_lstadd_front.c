/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusto <aaugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:11:51 by aaugusto          #+#    #+#             */
/*   Updated: 2025/03/01 18:16:42 by aaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
int	main(void)
{
	// Creating a linked list
    t_list **list = malloc(sizeof(t_list) * 3);
    if (list == NULL) {
        return 1;
    }
	
	//Creating a Node to add to the front of the list
	t_list *newNode = malloc(sizeof(t_list));
    if (newNode == NULL) {
        return 1;
    }
    newNode->content = "Sou o primeiro a ser adicionado";
    newNode->next = NULL;
    // Adding the new node to the front of the list
    ft_lstadd_front(list, newNode);

    //TRYING WITH ADDING ANOTHER ONE
    t_list *teste = malloc(sizeof(t_list));
    if (teste == NULL) {
        return 1;
    }
    teste->content = "Eu o segundo";
    teste->next = NULL;
    ft_lstadd_front(list, teste);

    //ADDING YET ANOTHER ONE
    t_list *teste1 = malloc(sizeof(t_list));
    if (teste1 == NULL) {
        return 1;
    }
    teste1->content = "Fui o ultimo :(";
    teste1->next = NULL;
    ft_lstadd_front(list, teste1);
    
    // Printing the linked list to verify the result
    t_list *current = *list;
    while (current != NULL) {
        ft_putendl_fd(current->content, 1);
        current = current->next;
    }
    free(list);
    return (0);
}