/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <hbaduel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:57:38 by hbaduel           #+#    #+#             */
/*   Updated: 2023/09/12 23:48:13 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(int *pile, int size, char *str)
{
	int	i;
	int	temp;

	if (size <= 1)
		return ;
	i = 0;
	while (i < size - 1)
	{
		temp = pile[i];
		if (i == 0)
		{
			pile[i] = pile[size - 1];
			pile[size - 1] = temp;
		}
		else
		{
			pile[i] = pile[i - 1];
			pile[i - 1] = temp;
		}
		i++;
	}
	ft_putstr_fd(str, 1);
}

void	reverse_rotate(int *pile, int size, char *str)
{
	int	i;
	int	temp;

	if (size <= 1)
		return ;
	i = size - 1;
	while (i > 0)
	{
		temp = pile[i];
		if (i == size - 1)
		{
			pile[i] = pile[0];
			pile[0] = temp;
		}
		else
		{
			pile[i] = pile[i + 1];
			pile[i + 1] = temp;
		}
		i--;
	}
	ft_putstr_fd(str, 1);
}
