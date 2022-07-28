/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:52:58 by saksoy            #+#    #+#             */
/*   Updated: 2022/07/28 14:54:56 by saksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_swap *index)
{
	int	i;

	i = 0;
	while (i < index->a_len - 1)
	{
		if (index->stack_a[i] > index->stack_a[i + 1])
			++i;
		else
			return (0);
	}
	exit_swap(index);
	return (1);
}

int	check_sorted_rdx(t_swap *index)
{
	int	i;

	i = 0;
	while (i < index->a_len - 1)
	{
		if (index->stack_a[i] > index->stack_a[i + 1])
			++i;
		else
			return (0);
	}
	return (1);
}

void	check_repeat(t_swap	*index)
{
	int	i;
	int	j;

	i = 0;
	while (i < index->a_len)
	{
		j = i + 1;
		while (j < index->a_len)
		{
			if (index->stack_a[i] == index->stack_a[j])
			{
				write(2, "Error\n", 6);
				exit_swap(index);
			}
			j++;
		}
		i++;
	}
}

int	is_valid(char *str)
{
	return ((str[0] == '+' && (str[1] == '+' || str[1] == '-'))
		|| (str[0] == '-' && (str[1] == '+' || str[1] == '-'))
		|| (str[0] == '+' && !ft_isdigit(str[1]))
		|| (str[0] == '-' && !ft_isdigit(str[1])));
}

void	check_all_num(char *str, t_swap *index)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) || (str[i] == ' ')
			|| !(is_valid(&str[i])))
		{
				++i;
		}
		else
		{
			write(2, "Error\n", 6);
			exit_swap(index);
		}
	}
}
