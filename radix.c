/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:25:56 by saksoy            #+#    #+#             */
/*   Updated: 2022/07/06 14:01:26 by saksoy           ###   ########.fr       */
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

void	find_idx(t_swap *index)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < index->a_len)
	{
		j = 0;
		while (j < index->a_len)
		{
			if (index->stack_a[i] == index->sorted[j])
				index->stack_a[i] = j;
			j++;
		}
		i++;
	}
}

void	radix_sort(t_swap *index)
{
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	bg_sort_min(index);
	find_idx(index);
	size = index->a_len;
	max_bits = get_max_bits(index);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (index->stack_a[index->a_len - 1] >> i & 1)
				rotate_a(index);
			else
				push_b(index);
			j++;
		}
		while (index->b_len)
			push_a(index);
		i++;
	}
}
