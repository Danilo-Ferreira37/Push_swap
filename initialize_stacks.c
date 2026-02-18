/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_stacks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 19:33:34 by dosorio-          #+#    #+#             */
/*   Updated: 2026/01/15 22:24:30 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int value, t_stack *s)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		error(s, NULL, NULL);
	node->idx = 0;
	node->next = NULL;
	node->value = value;
	return (node);
}

static void	node_add_back(t_stack *s, int value)
{
	t_node	*tmp;
	t_node	*node;

	node = new_node(value, s);
	if (!s->top_a)
	{
		s->top_a = node;
		return ;
	}
	tmp = s->top_a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;
}

void	init_stacks(t_stack *stack, int *nbrs, int size)
{
	int	i;

	i = 0;
	stack->top_a = NULL;
	stack->size_a = 0;
	while (i < size)
	{
		node_add_back(stack, nbrs[i]);
		stack->size_a++;
		i++;
	}
	stack->top_b = NULL;
	stack->size_b = 0;
}
