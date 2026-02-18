/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 21:30:50 by dosorio-          #+#    #+#             */
/*   Updated: 2026/01/15 16:58:42 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stacks;

	if (argc < 2)
		return (0);
	initialize_and_checker(argv, &stacks);
	if (stacks.size_a == 2)
		sa(&stacks);
	else if (stacks.size_a == 3)
		n_3(&stacks);
	else if (stacks.size_a <= 5)
		n_5(&stacks);
	else
		radix(&stacks);
	clear_stacks(&stacks);
	return (0);
}
