/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:16:38 by dosorio-          #+#    #+#             */
/*   Updated: 2026/01/13 13:53:49 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while ((*lst) != NULL)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}

/* int	main(void)
{
	t_list *lst = ft_lstnew(strdup("um"));
	ft_lstadd_back(&lst, ft_lstnew(strdup("dois")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("três")));

	ft_lstclear(&lst, libera);

	return (0);
} */