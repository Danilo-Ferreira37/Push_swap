/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:44:39 by dosorio-          #+#    #+#             */
/*   Updated: 2025/11/03 16:21:00 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief
/// @param lst
/// @return returns the last list
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include "libft.h"

int main(void)
{
    t_list *lst = ft_lstnew("um");
    ft_lstadd_back(&lst, ft_lstnew("dois"));
    ft_lstadd_back(&lst, ft_lstnew("três"));

    t_list *ultimo = ft_lstlast(lst);
    printf("%s\n", (char *)ultimo->content);

    return 0;
} */