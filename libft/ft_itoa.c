/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:02:58 by dosorio-          #+#    #+#             */
/*   Updated: 2025/10/30 14:48:54 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief turns the integer in a caracter/string
/// @param n
/// @return character/string
static size_t	len_n(long nb)
{
	size_t	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*d;
	size_t	n_digits;
	long	nb;

	nb = n;
	n_digits = len_n(nb);
	d = malloc(sizeof(char) * (n_digits + 1));
	if (!d)
		return (NULL);
	d[n_digits--] = '\0';
	if (nb < 0)
	{
		d[0] = '-';
		nb *= -1;
	}
	while (nb >= 10)
	{
		d[n_digits--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	d[n_digits] = nb + '0';
	return (d);
}
/* int main()
{
	int	n;

	n = -4000;
	printf("%s\n",ft_itoa(n));
	return (0);
}
 */