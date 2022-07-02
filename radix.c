/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:25:56 by saksoy            #+#    #+#             */
/*   Updated: 2022/07/02 19:07:58 by saksoy           ###   ########.fr       */
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

void	radix_sort(t_swap *index)
{
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	size = index->a_len - 1;
	//size = 7;
	//max_bits = get_max_bits(index);
	max_bits = 7;
	printf("%d => size, %d => max_bits\n", size, max_bits);
	while (i < 5)
	{
		j = 0;
		while (j < 7)
		{
			if (((index->stack_a[j] >> i) & 1))
				rotate_a(index);
			else
				push_b(index);
			j++;
		}
		printf("%d b_len\n",index->b_len);
		while (index->b_len != 0)
		{
			push_a(index);
		}
		i++;
	}
}
