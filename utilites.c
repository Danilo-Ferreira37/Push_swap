/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilites.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 19:34:12 by dosorio-          #+#    #+#             */
/*   Updated: 2026/01/13 12:34:53 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node *top)
{
	t_node	*tmp;

	tmp = top;
	while (tmp && tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

static void	put_min_top(t_stack *s)
{
	int	min;
	int	idx;
	int	half;

	min = min_value(s->top_a);
	idx = min_idx(s->top_a, min);
	half = s->size_a / 2;
	if (idx <= half)
	{
		while (idx-- > 0)
			ra(s);
	}
	else
	{
		while (idx++ < s->size_a)
			rra(s);
	}
}

void	n_3(t_stack *s)
{
	int	a;
	int	b;
	int	c;

	a = s->top_a->value;
	b = s->top_a->next->value;
	c = s->top_a->next->next->value;
	if (is_sorted(s->top_a))
		return ;
	if (a > b && b < c && a < c)
		sa(s);
	else if (a > b && a > c && b > c)
	{
		sa(s);
		rra(s);
	}
	else if (a < b && a < c)
	{
		sa(s);
		ra(s);
	}
	else if (a > b && a > c && b < c)
		ra(s);
	else if (a < b && a > c && b > c)
		rra(s);
}

void	n_5(t_stack *s)
{
	while (s->size_a > 3)
	{
		put_min_top(s);
		pb(s);
	}
	n_3(s);
	pa(s);
	pa(s);
}

void	clear_stacks(t_stack *stacks)
{
	t_node	*tmp;

	if (!stacks)
		return ;
	while (stacks->top_a)
	{
		tmp = stacks->top_a->next;
		free(stacks->top_a);
		stacks->top_a = tmp;
	}
	while (stacks->top_b)
	{
		tmp = stacks->top_b->next;
		free(stacks->top_b);
		stacks->top_b = tmp;
	}
}
