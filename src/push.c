/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaduel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:09:12 by hbaduel           #+#    #+#             */
/*   Updated: 2023/05/26 14:09:13 by hbaduel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(int *out, int *in, int *sizeout, int *sizein)
{
	int	push;
	int	temp;
	int	i;

	if (*sizeout == 0)
		return ;
	*sizein += 1;
	reverse_rotate(in, *sizein, NULL);
	in[0] = out[0];
	rotate(out, *sizeout, NULL);
	*sizeout -= 1;
}
