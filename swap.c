/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocabas <akocabas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:45:22 by saksoy            #+#    #+#             */
/*   Updated: 2022/06/29 00:13:22 by akocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_swap	*index)
{
	int	temp;

	temp = index->stack_a[index->a_len - 1];
	index->stack_a[index->a_len - 1] = index->stack_a[index->a_len - 2];
	index->stack_a[index->a_len - 2] = temp;
	write(1, "sa\n", 4);
}

void	swap_b(t_swap	*index)
{
	int	temp;

	temp = index->stack_b[index->b_len - 1];
	index->stack_b[index->b_len - 1] = index->stack_b[index->b_len - 2];
	index->stack_b[index->b_len - 2] = temp;
	write(1, "sb\n", 4);
}

void	swap_ss(t_swap	*index)
{
	int	temp;

	temp = index->stack_a[index->a_len - 1];
	index->stack_a[index->a_len - 1] = index->stack_a[index->a_len - 2];
	index->stack_a[index->a_len - 2] = temp;
	temp = index->stack_b[index->b_len - 1];
	index->stack_b[index->b_len - 1] = index->stack_b[index->b_len - 2];
	index->stack_b[index->b_len - 2] = temp;
	write(1, "ss\n", 4);
}
