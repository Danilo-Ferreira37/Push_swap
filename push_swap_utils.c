/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 19:33:51 by dosorio-          #+#    #+#             */
/*   Updated: 2026/01/16 16:49:27 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoll(char *nptr, int *nbrs, char **split)
{
	int			i;
	long long	result;
	long		sign;

	sign = 1;
	i = 0;
	result = 0;
	while (ft_isspace(nptr[i]) || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (ft_isoperator(nptr[i]))
	{
		if (nptr[i++] == '-')
			sign = -1;
	}
	while (ft_isdigit(nptr[i]))
	{
		if (result * 10 > INT_MAX || (((result * 10) * sign) < INT_MIN))
			error(NULL, nbrs, split);
		result = (result * 10) + (nptr[i++] - '0');
		if (result > INT_MAX || (result * sign) < INT_MIN )
			error(NULL, nbrs, split);
	}
	return (result * sign);
}

int	numbers_count(char **argv)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	count = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			while (ft_isspace(argv[i][j]))
				j++;
			if (ft_isdigit(argv[i][j]) || (ft_isoperator(argv[i][j])
					&& ft_isdigit(argv[i][j + 1])))
			{
				count++;
				j++;
				while (argv[i][j] && ft_isdigit(argv[i][j]))
					j++;
			}
		}
		i++;
	}
	return (count);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		error(NULL, NULL, NULL);
	while (split[i])
		free(split[i++]);
	free(split);
}

void	fill_numbers(char **argv, int *nbrs, int total)
{
	char	**split;
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	while (argv[i])
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			error(NULL, nbrs, split);
		j = 0;
		while (split[j])
			nbrs[k++] = ft_atoll(split[j++], nbrs, split);
		free_split(split);
		i++;
	}
	check_duplicates(nbrs, total);
}
