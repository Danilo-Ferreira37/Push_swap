/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:08:00 by dosorio-          #+#    #+#             */
/*   Updated: 2025/10/30 17:17:04 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// o size refere-se ao tamanho do *dst
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	src_len = ft_strlen(src);
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;
	if (dst_len == size)
		return (size + src_len);
	while (src[i] != '\0' && dst_len + i + 1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/* linha 26 --- 29
O if serve pra saber se a src_len e menor que size;
se for retorna o size(porque e igual ao destoriginal) + src_len */
