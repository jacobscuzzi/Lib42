/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:45:36 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/10/03 00:26:49 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_check(const char *str)
{
	int		i;
	long	counter;
	int		negator;

	negator = 1;
	i = 0;
	counter = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negator *= -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		counter = counter * 10 + str[i] - '0';
		if (counter * negator > INT_MAX)
			return (0);
		else if (counter * negator < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}
