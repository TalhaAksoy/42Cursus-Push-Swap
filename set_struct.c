/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:38:54 by saksoy            #+#    #+#             */
/*   Updated: 2022/06/23 00:39:58 by saksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*get_argv(char **argv)
{
	char	**splitted;
	char	*ret;
	int		i;
	int		j;

	i = 0;
	ret = ft_calloc(999, sizeof(char *));
	while (argv[++i])
	{
		splitted = ft_split(argv[i], ' ');
		j = -1;
		while (splitted[++j])
		{
			ret = ft_strjoin(ret, splitted[j]);
			ret = ft_strjoin(ret, " ");
		}
		free_list(splitted);
	}
	return (ret);
}

void	set_values(char *str, t_swap *index)
{
	char	**spt;
	int		i;

	spt = ft_split(str, ' ');
	i = -1;
	while (spt[++i])
	{
		index->stack_a[i] = ft_atoi(spt[i]);
		index->a_len += 1;
	}
	free_list(spt);
}