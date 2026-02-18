/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:44:52 by dosorio-          #+#    #+#             */
/*   Updated: 2025/11/03 16:33:38 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief allocates memory  The ’content’ member variable is
// initialized with the given parameter ’content’.
// The variable ’next’ is initialized to NULL
/// @param content  The content to store in the new node.
/// @return pointer to the new code
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/* #include <stdio.h>
int	main(void)
{
	t_list *n = ft_lstnew("Olá");
	printf("%s\n", (char *)n->content);
	return (0);
} */