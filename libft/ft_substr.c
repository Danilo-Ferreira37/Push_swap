/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:18:04 by dosorio-          #+#    #+#             */
/*   Updated: 2025/10/24 22:32:42 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	len_substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	len_substr = ft_strlen(s + start);
	if (len_substr > len)
		len_substr = len;
	d = malloc(sizeof(char) * (len_substr + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (i < len_substr)
		d[i++] = s[start++];
	d[i] = '\0';
	return (d);
}
/*
int	main(void)
{
	const char *s = "daniloilo";
	unsigned int start = 0;
	size_t len = 10;
		printf("%s\n", ft_substr(s, start, len));
	return(0);
} */
