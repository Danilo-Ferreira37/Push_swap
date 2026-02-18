/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:58:09 by dosorio-          #+#    #+#             */
/*   Updated: 2025/12/19 19:28:24 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter_words(const char *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			counter++;
		i++;
	}
	return (counter);
}

static int	len_word(const char *start, char c)
{
	int	i;

	i = 0;
	while (start[i] != c && start[i] != '\0')
		i++;
	return (i);
}

static char	*ft_strndup(const char *start, int n)
{
	char	*d;
	int		i;

	i = 0;
	if (!start)
		return (NULL);
	d = malloc(sizeof(char) * (n + 1));
	if (!d)
		return (NULL);
	while (i < n)
	{
		d[i] = start[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

static int	fill_words(char **d, const char *s, char c)
{
	int			i;
	int			j;
	int			size;
	const char	*start;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = s + i;
			size = len_word(start, c);
			d[j] = ft_strndup(start, size);
			if (!d[j])
				return (j);
			j++;
			i += size;
		}
		else
			i++;
	}
	d[j] = NULL;
	return (-1);
}

char	**ft_split(char const *s, char c)
{
	char	**d;
	int		number_words;
	int		verification;

	if (!s)
		return (NULL);
	number_words = counter_words(s, c);
	d = malloc(sizeof(char *) * (number_words + 1));
	if (!d)
		return (NULL);
	verification = fill_words(d, s, c);
	if (verification != -1)
	{
		while (verification--)
			free(d[verification]);
		free(d);
		return (NULL);
	}
	return (d);
}

/*
int	main(void)
{
	char **r = ft_split("banana,maçã,kiwi", ',');
	int i = 0;

	while (r[i])
		printf("%s\n", r[i++]);

	while (i--)
		free(r[i]);
	free(r);

	return (0);
} */
