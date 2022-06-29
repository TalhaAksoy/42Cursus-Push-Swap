/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akocabas <akocabas@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 01:02:17 by akocabas          #+#    #+#             */
/*   Updated: 2022/06/29 01:58:444 by akocabas         ###   ########.fr       */
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
	write(1, "All varraible are sorted\n", 26);
	exit_swap(index);
	return (1);
}

void	check_repeat(t_swap	*index)
{
	int	i;

	i = 0;
	while (i < index->a_len - 1)
	{
		if (index->stack_a[i] != index->stack_a[i + 1])
			++i;
		else
		{
			write(1, "Found Repeated Number\n", 23);
			exit_swap(index);
		}
	}
}

void	check_all_num(char *str)
{
	int		i;

	i = 0;

	while (str[i])
	{
		if (ft_isdigit(str[i]) || (str[i] == ' '))
			++i;
		else
		{
			write(1, "Invalid paramater\n", 19);
			exit_swap((t_swap *)str);
		}
	}
}
