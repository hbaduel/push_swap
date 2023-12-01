/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortlow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:52:01 by hbaduel           #+#    #+#             */
/*   Updated: 2023/09/13 11:52:22 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three(int *a, int size)
{
	if (a[1] < a[0] && a[1] < a[2] && a[0] < a[2])
		swap(a, "sa\n");
	else if (a[1] < a[0] && a[1] < a[2] && a[0] > a[2])
		rotate(a, size, "ra\n");
	else if (a[1] > a[0] && a[1] > a[2] && a[0] > a[2])
		reverse_rotate(a, size, "rra\n");
	else if (a[1] > a[0] && a[1] > a[2] && a[0] < a[2])
	{
		swap(a, "sa\n");
		rotate(a, size, "ra\n");
	}
	else
	{
		swap(a, "sa\n");
		reverse_rotate(a, size, "rra\n");
	}
}

int	ft_searchlowest(int *list, int size)
{
	int	lowest;
	int	pos;
	int	i;

	lowest = list[0];
	pos = 0;
	i = 1;
	while (i < size)
	{
		if (list[i] < lowest)
		{
			lowest = list[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

void	ft_putlowesttop(int *list, int size)
{
	int	lowestpos;

	lowestpos = ft_searchlowest(list, size);
	if (lowestpos == 1 && list[0] > list[1])
		swap(list, "sa\n");
	else if (lowestpos <= size / 2)
	{
		while (lowestpos > 0)
		{
			rotate(list, size, "ra\n");
			lowestpos--;
		}
	}
	else if (lowestpos > size / 2)
	{
		while (lowestpos < size)
		{
			reverse_rotate(list, size, "rra\n");
			lowestpos++;
		}
	}
}

void	ft_lowerfive(t_data *data)
{
	int	i;

	i = 0;
	while (data->sizea > 3)
	{
		ft_putlowesttop(data->a, data->sizea);
		push(data->a, data->b, &data->sizea, &data->sizeb);
		ft_putstr_fd("pb\n", 1);
	}
	if (ft_checksort(data->a, data->sizea) == 1)
		ft_three(data->a, data->sizea);
	while (data->sizeb > 0)
	{
		push(data->b, data->a, &data->sizeb, &data->sizea);
		ft_putstr_fd("pa\n", 1);
	}
}
