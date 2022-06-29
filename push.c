/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 23:07:07 by saksoy            #+#    #+#             */
/*   Updated: 2022/06/28 23:44:58 by saksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_swap *index)
{
	if (index->a_len <= 0)
	{
		write(1, "A stack empty\n", 15);
		exit(1);
	}
	index->b_len++;
	index->stack_b[index->b_len - 1] = index->stack_a[index->a_len - 1];
	index->stack_a[index->a_len - 1] = 0;
	index->a_len--;
	write(1, "pb\n", 3);
}

void	push_a(t_swap *index)
{
	if (index->b_len <= 0)
	{
		write(1, "B stack empty\n", 15);
		exit(1);
	}
	index->a_len++;
	index->stack_a[index->a_len - 1] = index->stack_b[index->b_len - 1];
	index->stack_b[index->b_len - 1] = 0;
	index->b_len--;
	write(1, "pa\n", 3);
}
