/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:50:32 by dosorio-          #+#    #+#             */
/*   Updated: 2026/01/15 22:30:50 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_stack *s, int *arr, char **split)
{
	write(2, "Error\n", 6);
	free(arr);
	if (split)
		free_split(split);
	clear_stacks(s);
	exit(1);
}

void	first_checker(char **s)
{
	int	i;
	int	j;

	i = 1;
	while (s[i])
	{
		j = 0;
		if (*s[i] == 0)
			error(NULL, NULL, NULL);
		while (s[i][j])
		{
			if ((!ft_isdigit(s[i][j]) && !ft_isoperator(s[i][j])
					&& !ft_isspace(s[i][j])) || (ft_isoperator(s[i][j])
					&& (!ft_isdigit(s[i][j + 1]) || (j > 0 && !ft_isspace(s[i][j
								- 1])))))
				error(NULL, NULL, NULL);
			else if (space_only(s[i]))
				error(NULL, NULL, NULL);
			j++;
		}
		i++;
	}
}

void	initialize_and_checker(char **argv, t_stack *stacks)
{
	int	*nbrs;
	int	total;

	first_checker(argv);
	total = numbers_count(argv);
	nbrs = malloc(sizeof(int) * total);
	if (!nbrs)
		error(NULL, NULL, NULL);
	fill_numbers(argv, nbrs, total);
	init_stacks(stacks, nbrs, total);
	free(nbrs);
	if (is_sorted(stacks->top_a))
	{
		clear_stacks(stacks);
		exit(0);
	}
}

void	check_duplicates(int *nbrs, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (nbrs[i] == nbrs[j])
				error(NULL, nbrs, NULL);
			j++;
		}
		i++;
	}
}
