/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:40:37 by dosorio-          #+#    #+#             */
/*   Updated: 2025/10/30 21:27:47 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/// @brief 
/// @param s 
/// @param f 
/// @return string turns in "(*f)"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*d;

	i = 0;
	if (!f || !s)
		return (NULL);
	len = ft_strlen(s);
	d = malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	while (s[i] != '\0')
	{
		d[i] = (*f)(i, s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}
/* #include <stdio.h>
#include <ctype.h>

char	to_upper_if_even(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (toupper(c));
	return (c);
}

int	main(void)
{
	char	*s = "hello world";
	char	*res;

	res = ft_strmapi(s, to_upper_if_even);
	if (!res)
		return (1);
	printf("Original: %s\nMapped:   %s\n", s, res);
	free(res);
	return (0);
} */
