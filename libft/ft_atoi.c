/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:47:14 by dosorio-          #+#    #+#             */
/*   Updated: 2025/10/29 15:18:59 by dosorio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/// @brief turns a string in a int
/// @param nptr 
/// @return int
int	ft_atoi(const char *nptr)
{
	int		i;
	long	result;
	int		sign;

	sign = 1;
	i = 0;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] <= 57 && nptr[i] >= 48)
	{
		result = (result * 10) + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}
/* int main()
{
	char *nptr = "1234567891";

	printf("%d", ft_atoi(nptr));
	return (0);
} */
