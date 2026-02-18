/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:02:50 by dosorio-          #+#    #+#             */
/*   Updated: 2025/12/30 16:03:41 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	d = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!d)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		d[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		d[i] = s2[j];
		i++;
		j++;
	}
	d[i] = '\0';
	return (d);
}
/* #include <stdio.h>

int	main(void)
{
	const char *s1 = "";
	const char *s2 = "ferreira";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
} */