/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <hbaduel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:10:47 by hbaduel           #+#    #+#             */
/*   Updated: 2023/09/13 10:10:17 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checksort(int *list, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (list[j] < list[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*ft_dupindex(int *a, int sizea)
{
	int	*tab;
	int	i;
	int	j;
	int	index;

	tab = malloc(sizeof(int) * sizea);
	i = 0;
	while (i < sizea)
	{
		index = 0;
		j = 0;
		while (j < sizea)
		{
			if (a[j] < a[i])
				index++;
			j++;
		}
		tab[i] = index;
		i++;
	}
	free(a);
	return (tab);
}

void	ft_emptyb(t_data *data)
{
	while (data->sizeb > 0)
	{
		push(data->b, data->a, &data->sizeb, &data->sizea);
		ft_putstr_fd("pa\n", 1);
	}
}

void	ft_radix(t_data *data)
{
	int	i;
	int	bit;
	int	temp;

	bit = 0;
	temp = data->sizea;
	while (ft_checksort(data->a, data->sizea) == 1)
	{
		i = 0;
		while (i < temp)
		{
			if ((data->a[0] >> bit & 1) == 0)
			{
				push(data->a, data->b, &data->sizea, &data->sizeb);
				ft_putstr_fd("pb\n", 1);
			}
			else
				rotate(data->a, data->sizea, "ra\n");
			i++;
		}
		ft_emptyb(data);
		bit++;
	}
}

void	ft_choosesort(t_data *data)
{
	if (ft_checksort(data->a, data->sizea) == 0)
		return ;
	else if (data->sizea == 2)
		swap(data->a, "sa\n");
	else if (data->sizea == 3)
		ft_three(data->a, data->sizea);
	else if (data->sizea <= 5)
		ft_lowerfive(data);
	else
	{
		data->a = ft_dupindex(data->a, data->sizea);
		ft_radix(data);
	}
}
