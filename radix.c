/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:25:56 by saksoy            #+#    #+#             */
/*   Updated: 2022/07/05 04:04:25 by saksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(t_swap *index)
{
	int	max;
	int	i;
	int	max_bits;

	max = -1;
	max_bits = 0;
	i = index->a_len;
	while (i > 0)
	{
		if (index->stack_a[i - 1] > max)
			max = index->stack_a[i - 1];
		i--;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

int	find_idx(int idx_nbr, t_swap *index)
{
	int	i;

	i = 0;
	while (idx_nbr != index->sorted[i])
		i++;
	return (i);
}

void	radix_sort(t_swap *index)
{
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	bg_sort_min(index);
	size = index->a_len;
	max_bits = get_max_bits(index);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((find_idx(index->stack_a[index->a_len - 1], index) >> i) & 1)
				rotate_a(index);
			else
				push_b(index);
			j++;
		}
		while (index->b_len != 0)
			push_a(index);
		i++;
	}
}
