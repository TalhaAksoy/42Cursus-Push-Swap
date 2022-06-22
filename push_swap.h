/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:59:11 by saksoy            #+#    #+#             */
/*   Updated: 2022/06/22 18:59:24 by saksoy           ###   ########.fr       */
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
}t_swap;

void	print_stack(int *a, char stack_name);
void	push_b(int *a, int *b);
void	exit_swap(t_swap	*index);
char	*get_argv(char **argv);
void	set_values(char *str, t_swap *index);
void	free_list(char **list);

#endif