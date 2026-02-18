/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:14:41 by dosorio-          #+#    #+#             */
/*   Updated: 2025/10/30 21:14:12 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (n == 0 || dest == src)
		return (dest);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/* #include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
    char src[] = "Danilo";
    char dst_std[10];
    char dst_ft[10];

    memcpy(dst_std, src, 6);      // função padrão
    ft_memcpy(dst_ft, src, 6);    // tua versão

    printf("memcpy:    %s\n", dst_std);
    printf("ft_memcpy: %s\n", dst_ft);
}
 */
/* if(dest == src)
Coloquei essa condicao para para evitar
sobreposicao da memoria, caso o dest e src sejam
o mesmo ponteiro causando UB. */