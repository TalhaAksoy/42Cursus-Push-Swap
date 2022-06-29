/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:46:08 by saksoy            #+#    #+#             */
/*   Updated: 2022/06/29 03:10:51 by saksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_swap	*index)
{
	int	temp;
	int	i;

	i = index->a_len;
	while (i > 1)
	{
		--i;
		temp = index->stack_a[i];
		index->stack_a[i] = index->stack_a[i - 1];
		index->stack_a[i - 1] = temp;
	}
	write(1, "ra\n", 4);
}

void	rotate_b(t_swap	*index)
{
	int	temp;
	int	i;

	i = index->b_len;
	while (i > 1)
	{
		--i;
		temp = index->stack_b[i];
		index->stack_b[i] = index->stack_b[i - 1];
		index->stack_b[i - 1] = temp;
	}
	write(1, "rb\n", 4);
}

void	rotate_r(t_swap	*index)
{
	int	temp;
	int	i;

	i = index->a_len;
	while (i > 1)
	{
		--i;
		temp = index->stack_a[i];
		index->stack_a[i] = index->stack_a[i - 1];
		index->stack_a[i - 1] = temp;
	}
	i = index->b_len;
	while (i > 1)
	{
		--i;
		temp = index->stack_b[i];
		index->stack_b[i] = index->stack_b[i - 1];
		index->stack_b[i - 1] = temp;
	}
	write(1, "rr\n", 4);
}
