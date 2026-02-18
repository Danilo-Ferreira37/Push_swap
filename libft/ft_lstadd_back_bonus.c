/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:49:14 by dosorio-          #+#    #+#             */
/*   Updated: 2026/01/09 20:59:23 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*last;

	if (!lst || !new_node)
		return ;
	if (*lst == NULL)
	{
		*lst = new_node;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new_node;
}
/* int main(void)
{
    t_list *lst = NULL;

    ft_lstadd_back(&lst, ft_lstnew("um"));
    ft_lstadd_back(&lst, ft_lstnew("dois"));
    ft_lstadd_back(&lst, ft_lstnew("três"));

    while (lst)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }

    return 0;
} */