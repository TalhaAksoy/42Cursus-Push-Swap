/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:38:54 by saksoy            #+#    #+#             */
/*   Updated: 2022/06/28 23:06:38 by saksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*get_argv(char **argv)
{
	char	**splitted;
	char	*ret;
	char	*old;
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
			old = ret;
			ret = ft_strjoin(ret, splitted[j]);
			free(old);
			old = ret;
			ret = ft_strjoin(ret, " ");
			free(old);
		}
		free_list(splitted);
	}
	return (ret);
}

void	set_values(char *str, t_swap *index)
{
	char	**spt;
	int		i;
	int		j;

	spt = ft_split(str, ' ');
	i = 0;
	j = 0;
	while (spt[i])
		i++;
	while (spt[--i])
	{
		index->stack_a[j] = ft_atoi(spt[i]);
		j++;
	}
	free_list(spt);
}
