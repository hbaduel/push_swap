/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:40:17 by hbaduel           #+#    #+#             */
/*   Updated: 2023/02/03 14:50:19 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_atoi(char *str)
{
	long	sign;
	long	result;
	size_t	i;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}
