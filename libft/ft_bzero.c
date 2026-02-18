/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:49:01 by dosorio-          #+#    #+#             */
/*   Updated: 2025/11/03 16:42:34 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/// @brief fill the memory with '\0'
/// @param s 
/// @param n 
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*mem;

	mem = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		mem[i] = '\0';
		i++;
	}
}

/* int	main(void)
{
	char str[] = "Hello";

	ft_bzero(str + 2, 2);

	printf("Result: %s\n", str);
	return (0);
} */