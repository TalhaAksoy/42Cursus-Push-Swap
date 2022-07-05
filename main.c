/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:00:02 by saksoy            #+#    #+#             */
/*   Updated: 2022/07/05 03:16:14 by saksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_swap(t_swap	*index)
{
	(void)index;
	exit(0);
}

void	free_list(char **list)
{
	char	**head;

	head = list;
	while (list && *list)
		free(*list++);
	free(head);
}

t_swap	*init(char **argv)
{
	char	*str;
	char	**arr;
	t_swap	*swap;
	int		len;

	len = 0;
	str = get_argv(argv);
	arr = ft_split(str, ' ');
	check_all_num(str);
	while (arr[len])
		len++;
	swap = ft_calloc(1, sizeof(t_swap));
	swap->stack_a = malloc(sizeof(int) * len);
	swap->stack_b = malloc(sizeof(int) * len);
	swap->sorted = malloc(sizeof(int) * len);
	swap->a_len = len;
	set_values(str, swap);
	free_list(arr);
	free(str);
	return (swap);
}

void	error_control(t_swap	*index)
{
	check_sorted(index);
	check_repeat(index);
}

int	main(int argc, char **argv)
{
	t_swap	*index;

	if (argc > 1)
	{
		index = init(argv);
		error_control(index);
		radix_sort(index);
		print_stack_a(index);
	}
	else
	{
		write(2, "İnvalid Argument\n", 19);
		return (0);
	}
	exit_swap(index);
	return (0);
}
