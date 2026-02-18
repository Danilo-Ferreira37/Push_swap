/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:45:46 by dosorio-          #+#    #+#             */
/*   Updated: 2025/11/03 16:44:45 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

/// @brief allocates space in memory just like malloc, but zeroed
/// @param nmemb
/// @param size number of bytes(char, int, etc)
/// @return the memmory zeroed
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*d;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	d = malloc(nmemb * size);
	if (!d)
		return (NULL);
	ft_memset(d, 0, nmemb * size);
	return (d);
}
/* #include <stdio.h>

int main(void)
{
	int *p = ft_calloc(5, sizeof(int));
	int i = 0;

	while (i < 5)
	{
		printf("%d ", p[i]);
		i++;
	}
	free(p);
} */