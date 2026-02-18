/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:42:55 by dosorio-          #+#    #+#             */
/*   Updated: 2025/11/03 16:18:56 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* #include <stdio.h>

void imprime(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *lst = ft_lstnew("um");
    ft_lstadd_back(&lst, ft_lstnew("dois"));
    ft_lstadd_back(&lst, ft_lstnew("três"));

    ft_lstiter(lst, imprime);

    return 0;
}
 */