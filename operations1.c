/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:41:16 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/30 19:18:12 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

t_node	*create_node(int data)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

t_node	*ft_lstlast(t_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}



void	swap_a(t_node **head)
{
	int		temp;
	t_node	*current;

	current = *head;
	temp = current->data;
	current->data = current->next->data;
	current->next->data = temp;
	printf("sa\n");
}

void	swap_b(t_node **head)
{
	int		temp;
	t_node	*current;

	current = *head;
	temp = current->data;
	current->data = current->next->data;
	current->next->data = temp;
	printf("sb\n");
}

void	swap_both(t_node **stack_a, t_node **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
	printf("ss\n");
}
// t_node	push(t_node **, t_node **)
// {

// }

int main(void)
{
    t_node *head = NULL;
    t_node *second = NULL;
    t_node *third = NULL;
	printf("1");
	head = create_node(10);
	ft_lstadd_back(&head, create_node(20));
	ft_lstadd_back(&head, create_node(30));
	printf("%d \n", head->next->data);
    // head->next = second;
	// printf("2");
    // second = create_node(20);
    // second->next = third;
	// printf("3");
    // third = create_node(30);
    // third->next = NULL;

    // // Print linked list
    t_node *temp = head;
	// printf("First");
	printf("%d -> %d -> %d", head->data, head->next->data, head->next->next->data);
	swap_a(&head);
	printf("%d -> %d -> %d", head->data, head->next->data, head->next->next->data);
	// printf("Second");
    // while (temp != NULL)
    // {
    //     printf("%d -> ", temp->data);
    //     temp = temp->next;
    // }
	// printf("Third");
    // printf("NULL\n");

    // // Free allocated memory
    // temp = head;
    // while (temp != NULL)
    // {
    //     t_node *next = temp->next;
    //     free(temp);
    //     temp = next;
    // }

    return 0;
}