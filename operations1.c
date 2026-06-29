/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:41:16 by chlminga          #+#    #+#             */
/*   Updated: 2026/06/29 18:57:39 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

t_node	create_node(int data)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (new == NULL)
		return (NULL);
	new->data = data;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_node	swap_last(t_node **tail)
{
	t_node	*temp;
	t_node	*current;

	current = *tail;
	temp = NULL;
	while (current != NULL)
	{
		temp = current;
		current = current->prev;
		current->prev = temp;
	}
	if (t_node)
}

int main(int ac, char **av)
{
	t_node	stack_a;
	t_node	stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
}