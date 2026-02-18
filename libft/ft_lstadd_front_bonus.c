/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:11:43 by dosorio-          #+#    #+#             */
/*   Updated: 2026/01/09 20:59:11 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Adds the node ’new’ at the beginning of the list
/// @param lst The address of a pointer to the first node of a list
/// @param  new node that will be in the start of the list
void	ft_lstadd_front(t_list **lst, t_list *new_node)
{
	if (!lst || !new_node)
		return ;
	new_node->next = *lst;
	*lst = new_node;
}
/* int main(void)
{
    t_list *lst = ft_lstnew("três");
    ft_lstadd_front(&lst, ft_lstnew("dois"));
    ft_lstadd_front(&lst, ft_lstnew("um"));

    while (lst)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }

    return 0;
} */