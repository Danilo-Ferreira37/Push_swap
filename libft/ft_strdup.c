/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:37:48 by dosorio-          #+#    #+#             */
/*   Updated: 2025/10/27 15:42:20 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*d;
	int		j;

	i = 0;
	while (src[i] != '\0')
		i++;
	d = malloc(sizeof(char) * (i + 1));
	j = 0;
	if (!d)
		return (NULL);
	while (src[j] != '\0')
	{
		d[j] = src[j];
		j++;
	}
	d[j] = '\0';
	return (d);
}
