/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:59:11 by saksoy            #+#    #+#             */
/*   Updated: 2022/07/02 18:34:18 by saksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "./libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_swap
{
	int	*stack_a;
	int	*stack_b;
	int	a_len;
	int	b_len;
}t_swap;

void	print_stack_a(t_swap *index);
void	print_stack_b(t_swap *index);
void	push_b(t_swap *index);
void	push_a(t_swap *index);
void	exit_swap(t_swap	*index);
char	*get_argv(char **argv);
void	set_values(char *str, t_swap *index);
void	free_list(char **list);
void	swap_a(t_swap	*index);
void	swap_b(t_swap	*index);
void	swap_ss(t_swap	*index);
void	rotate_a(t_swap	*index);
void	rotate_b(t_swap	*index);
void	rotate_r(t_swap	*index);
void	reverse_rotate_a(t_swap *index);
void	reverse_rotate_b(t_swap *index);
void	reverse_rotate_r(t_swap *index);
int		check_sorted(t_swap *index);
void	check_repeat(t_swap	*index);
void	error_control(t_swap	*index);
void	check_all_num(char	*str);
void	radix_sort(t_swap *index);

#endif