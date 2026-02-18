/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilites2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 19:34:16 by dosorio-          #+#    #+#             */
/*   Updated: 2026/01/15 16:12:23 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_value(t_node *top)
{
	int	min;

	min = top->value;
	while (top)
	{
		if (min > top->value)
			min = top->value;
		top = top->next;
	}
	return (min);
}

int	min_idx(t_node *top, int value)
{
	int	i;

	i = 0;
	while (top)
	{
		if (top->value == value)
			return (i);
		top = top->next;
		i++;
	}
	return (-1);
}

int	max_idx(t_node *a)
{
	int	max;

	if (!a)
		return (0);
	max = a->idx;
	while (a)
	{
		if (a->idx > max)
			max = a->idx;
		a = a->next;
	}
	return (max);
}

int	space_only(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_number(char *s)
{
	int	i;

	i = 0;
	if (!s[0])
		return (0);
	if (s[0] == '+' || s[0] == '-')
	{
		if (!ft_isdigit(s[1]))
			return (0);
		i = 1;
	}
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
