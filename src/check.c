/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:44:43 by hbaduel           #+#    #+#             */
/*   Updated: 2023/09/13 11:45:01 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checkonlynum(int size, char **args, int mallocstatus)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (args[i][j])
		{
			if (args[i][j] == '-')
				j++;
			if (ft_isdigit(args[i][j]) != 1)
				ft_exiterror(mallocstatus, args);
			j++;
		}
		i++;
	}
}

void	ft_checknodup(int size, char **args, int mallocstatus)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(args[i], args[j]) == 0)
				ft_exiterror(mallocstatus, args);
			j++;
		}
		i++;
	}
}

void	ft_checkpile(int size, char **args, int mallocstatus)
{
	long	res;
	int		i;

	i = 0;
	ft_checkonlynum(size, args, mallocstatus);
	ft_checknodup(size, args, mallocstatus);
	while (i < size)
	{
		res = ft_atoi(args[i]);
		if (res < -2147483648 || res > 2147483647)
			ft_exiterror(mallocstatus, args);
		i++;
	}
}
