/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 00:23:17 by akocabas          #+#    #+#             */
/*   Updated: 2022/07/08 14:57:26 by saksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_swap *index)
{
	int	temp;
	int	i;

	i = 0;
	while (i < index->a_len -1)
	{
		temp = index->stack_a[i + 1];
		index->stack_a[i + 1] = index->stack_a[i];
		index->stack_a[i] = temp;
		++i;
	}
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_swap *index)
{
	int	temp;
	int	i;

	i = 0;
	while (i < index->b_len -1)
	{
		temp = index->stack_b[i + 1];
		index->stack_b[i + 1] = index->stack_b[i];
		index->stack_b[i] = temp;
		++i;
	}
	write(1, "rrb\n", 4);
}

void	reverse_rotate_r(t_swap *index)
{
	int	temp;
	int	i;

	i = 0;
	while (i < index->a_len -1)
	{
		temp = index->stack_a[i + 1];
		index->stack_a[i + 1] = index->stack_a[i];
		index->stack_a[i] = temp;
		++i;
	}
	i = 0;
	while (i < index->b_len -1)
	{
		temp = index->stack_b[i + 1];
		index->stack_b[i + 1] = index->stack_b[i];
		index->stack_b[i] = temp;
		++i;
	}
	write(1, "rrr\n", 4);
}
