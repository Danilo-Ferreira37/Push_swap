/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:07:17 by dosorio-          #+#    #+#             */
/*   Updated: 2025/10/28 14:41:48 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		uc;
	size_t				i;

	i = 0;
	ptr = (const unsigned char *)s;
	uc = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == uc)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
/* int  main()
{
	const void *s = "exemplo";
	int c = 'o';
	size_t n = 7;
	printf("%s\n", ft_memchr(s, c, n)  ? "Encontrado" : "Nao encontrado");
	return(0);
} */
