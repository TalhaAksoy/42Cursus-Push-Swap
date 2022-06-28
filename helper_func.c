/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:35:44 by saksoy            #+#    #+#             */
/*   Updated: 2022/06/28 19:17:59 by saksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	stack_len(int *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

void	print_stack(t_swap *index)
{
	int	i;

	i = 0;
	while (index->a_len - 1 >= 0)
	{
		printf("a[%d] => %d\n", index->a_len - 1,
			index->stack_a[index->a_len - 1]);
		index->a_len--;
	}
}

void	push_b(int *a, int *b)
{
	int	i;
	int	a_len;
	int	b_len;

	i = 0;
	a_len = stack_len(a);
	b_len = stack_len(b);
	if (a_len <= 0)
	{
		write(1, "A stack empty\n", 15);
		exit(1);
	}
	while (b_len >= 0)
	{
		b[b_len + 1] = b[b_len];
		i++;
		b_len--;
	}
	b[0] = a[0];
	i = 0;
	while (a[++i])
	{
		a[i] = a[i + 1];
	}
	write(1, "pb\n", 3);
}
