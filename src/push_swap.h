/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <hbaduel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:40:45 by hbaduel           #+#    #+#             */
/*   Updated: 2023/09/12 23:47:27 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_data {
	int	*a;
	int	*b;
	int	sizea;
	int	sizeb;
}		t_data;

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	swap(int *pile, char *str);
void	rotate(int *pile, int size, char *str);
void	reverse_rotate(int *pile, int size, char *str);
void	push(int *out, int *in, int *sizeout, int *sizein);
void	ft_choosesort(t_data *data);
void	ft_checkpile(int size, char **args, int mallocstatus);
void	ft_three(int *a, int size);
void	ft_exiterror(int mallocstatus, char **args);
void	ft_lowerfive(t_data *data);
char	**ft_split(char *s, char c);
char	*ft_strdup(char *s);
long	ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *s);
int		ft_isdigit(int c);
int		ft_checksort(int *list, int size);

#endif
