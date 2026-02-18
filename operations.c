/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 19:33:31 by dosorio-          #+#    #+#             */
/*   Updated: 2026/01/13 14:20:04 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*rest;

	if (stack->size_a < 2)
		return ;
	first = stack->top_a;
	second = first->next;
	rest = second->next;
	stack->top_a = second;
	second->next = first;
	first->next = rest;
	write(1, "sa\n", 3);
}

void	pa(t_stack *stack)
{
	t_node	*temp;

	if (stack->top_b == NULL)
		return ;
	temp = stack->top_b;
	stack->top_b = stack->top_b->next;
	stack->size_b--;
	temp->next = stack->top_a;
	stack->top_a = temp;
	stack->size_a++;
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack)
{
	t_node	*temp;

	if (stack->top_a == NULL)
		return ;
	temp = stack->top_a;
	stack->top_a = stack->top_a->next;
	stack->size_a--;
	temp->next = stack->top_b;
	stack->top_b = temp;
	stack->size_b++;
	write(1, "pb\n", 3);
}

void	ra(t_stack *stack)
{
	t_node	*first;
	t_node	*last;

	if (stack->size_a < 2)
		return ;
	first = stack->top_a;
	stack->top_a = stack->top_a->next;
	last = stack->top_a;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
}

void	rra(t_stack *stack)
{
	t_node	*last;
	t_node	*prev;

	if (stack->size_a < 2)
		return ;
	prev = NULL;
	last = stack->top_a;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = stack->top_a;
	stack->top_a = last;
	write(1, "rra\n", 4);
}
