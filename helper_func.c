/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:35:44 by saksoy            #+#    #+#             */
/*   Updated: 2022/07/04 11:44:21 by saksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack_a(t_swap *index)
{
	int	i;

	i = index->a_len;
	while (i > 0)
	{
		printf("a[%d] => %d\n", i - 1,
			index->stack_a[i - 1]);
		i--;
	}
}

void	print_stack_b(t_swap *index)
{
	int	i;

	i = index->b_len;
	while (i > 0)
	{
		printf("b[%d] => %d\n", i - 1,
			index->stack_b[i - 1]);
		i--;
	}
}

void	print_stack_sorted(t_swap *index)
{
	int	i;

	i = index->a_len;
	while (i > 0)
	{
		printf("sorted[%d] => %d\n", i - 1,
			index->sorted[i - 1]);
		i--;
	}
}
