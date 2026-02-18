/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:39:14 by dosorio-          #+#    #+#             */
/*   Updated: 2025/11/03 15:09:56 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief
/// @param lst
/// @return len of list
int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/* #include <stdio.h>

int main(void)
{
    t_list *lst = ft_lstnew("um");
    ft_lstadd_back(&lst, ft_lstnew("dois"));
    ft_lstadd_back(&lst, ft_lstnew("três"));

    printf("%d\n", ft_lstsize(lst));

    return 0;
}
 */