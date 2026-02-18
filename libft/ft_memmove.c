/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:23:41 by dosorio-          #+#    #+#             */
/*   Updated: 2025/10/30 20:52:38 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*mem_dest;
	const unsigned char	*mem_src;
	size_t				i;

	if (dest == src || n == 0)
		return (dest);
	mem_dest = (unsigned char *)dest;
	mem_src = (const unsigned char *)src;
	i = 0;
	if (mem_dest < mem_src)
	{
		while (i < n)
		{
			mem_dest[i] = mem_src[i];
			i++;
		}
	}
	else
	{
		while (n--)
			mem_dest[n] = mem_src[n];
	}
	return (dest);
}
/* #include <string.h>
#include <stdio.h>

int main(void)
{
    char src1[20] = "Hello";
	char src2[20] = "Hello";

    memmove(src1 + 2, src1, 6);
    ft_memmove(src2 + 2, src2, 6);
    printf("memmove:    %s\n", src1);
    printf("ft_memmove: %s\n", src2);
    return 0;
} */
/* while(n--) == while(n > 0) */