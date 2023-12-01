/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <hbaduel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:08:02 by hbaduel           #+#    #+#             */
/*   Updated: 2023/09/12 23:47:06 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freeargs(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

void	ft_exiterror(int mallocstatus, char **args)
{
	if (mallocstatus == 1)
		ft_freeargs(args);
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

t_data	*ft_setup(char **args, int argc)
{
	t_data	*data;
	int		i;

	data = malloc(sizeof(t_data));
	data->a = malloc(sizeof(int) * (argc - 1));
	data->b = malloc(sizeof(int) * (argc - 1));
	i = 0;
	while (i < argc - 1)
	{
		data->a[i] = (int)ft_atoi(args[i]);
		i++;
	}
	data->sizea = argc - 1;
	data->sizeb = 0;
	return (data);
}

void	ft_freeall(t_data *data, char **args, int mallocstatus)
{
	if (mallocstatus == 1)
		ft_freeargs(args);
	free(data->a);
	free(data->b);
	free(data);
	exit(0);
}

int	main(int argc, char **argv)
{
	t_data	*data;
	char	**args;
	int		i;
	int		mallocstatus;

	if (argc == 1)
		exit(1);
	mallocstatus = 0;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		i = 0;
		while (args[i])
			i++;
		argc = i + 1;
		mallocstatus = 1;
	}
	else
		args = &argv[1];
	ft_checkpile(argc - 1, args, mallocstatus);
	data = ft_setup(args, argc);
	ft_choosesort(data);
	ft_freeall(data, args, mallocstatus);
}
