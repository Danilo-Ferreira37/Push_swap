/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 19:34:02 by dosorio-          #+#    #+#             */
/*   Updated: 2026/01/15 22:30:20 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_node
{
	int				value;
	int				idx;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*top_a;
	t_node			*top_b;
	int				size_a;
	int				size_b;
}					t_stack;

// OPERATIONS
void				sa(t_stack *stack);
void				pa(t_stack *stack);
void				pb(t_stack *stack);
void				ra(t_stack *stack);
void				rra(t_stack *stack);

// PARSING
void				error(t_stack *s, int *arr, char **split);
void				initialize_and_checker(char **argv, t_stack *stacks);
void				init_stacks(t_stack *stack, int *nbrs, int size);
void				check_duplicates(int *numbers, int size);
void				fill_numbers(char **argv, int *nbrs, int total);

// HELPERS FUNCTIONS
void				free_split(char **split);
int					numbers_count(char **argv);
void				clear_stacks(t_stack *stacks);
int					space_only(char *s);
int					is_valid_number(char *s);

int					min_idx(t_node *top, int value);
int					min_value(t_node *top);
int					max_idx(t_node *a);

// SORTING
int					is_sorted(t_node *top);
void				n_3(t_stack *stack);
void				n_5(t_stack *s);
void				radix(t_stack *s);
#endif