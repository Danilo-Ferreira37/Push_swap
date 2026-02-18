/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:41:11 by dosorio-          #+#    #+#             */
/*   Updated: 2025/10/28 16:19:06 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*d;
	int		i;
	int		j;
	int		start;
	int		end;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0' && is_set(s1[i], set))
		i++;
	start = i;
	end = ft_strlen(s1) - 1;
	while (end > start && is_set(s1[end], set))
		end--;
	d = malloc(sizeof(char) * (end - start + 2));
	if (!d)
		return (NULL);
	i = start;
	while (i <= end)
		d[j++] = s1[i++];
	d[j] = '\0';
	return (d);
}
/* int main()
{
	char const *s1 = "//&?Dan&&ilo&&&";
	char const *set = "/?&*";
	printf("%s\n",ft_strtrim(s1, set) );
	return (0);

} */
/* 	while (s1[i] != '\0' && is_set(s1[i], set))
enquanto nao for o final, e is_set for verdade */