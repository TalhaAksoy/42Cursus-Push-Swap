/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_arg_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:41:08 by saksoy            #+#    #+#             */
/*   Updated: 2022/07/28 14:43:27 by saksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	one_arg(t_swap *index)
{
	if (index->a_len == 1)
	{
		write(2, "Error\n", 6);
		exit_swap(index);
	}
}