/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 19:34:05 by dosorio-          #+#    #+#             */
/*   Updated: 2026/01/15 22:24:03 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	bubble_sort(int *array, t_stack *s)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < s->size_a)
	{
		j = i + 1;
		while (j < s->size_a)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

static int	*array_sort_fill(int *array, t_stack *s)
{
	int		i;
	t_node	*tmp;

	i = 0;
	array = malloc(sizeof(int) * s->size_a);
	if (!array)
		error(s, array, NULL);
	tmp = s->top_a;
	while (tmp)
	{
		array[i++] = tmp->value;
		tmp = tmp->next;
	}
	bubble_sort(array, s);
	return (array);
}

static void	idx_assigment(t_stack *s)
{
	int		i;
	t_node	*tmp;
	int		*array;

	array = NULL;
	array = array_sort_fill(array, s);
	tmp = s->top_a;
	while (tmp)
	{
		i = 0;
		while (i < s->size_a)
		{
			if (array[i] == tmp->value)
			{
				tmp->idx = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
	free(array);
}

void	radix(t_stack *s)
{
	int	max;
	int	bits;
	int	size;
	int	bit;

	idx_assigment(s);
	max = max_idx(s->top_a);
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	bit = 0;
	while (bit < bits)
	{
		size = s->size_a;
		while (size--)
		{
			if (((s->top_a->idx >> bit) & 1) == 1)
				ra(s);
			else
				pb(s);
		}
		while (s->size_b)
			pa(s);
		bit++;
	}
}
