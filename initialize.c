/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 08:42:33 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 11:58:34 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_set_array(int argc, char **argv)
{
	int		i;
	char	**array;

	i = 0;
	if (argc == 2)
		array = ft_split(argv[1], ' ');
	else
	{
		array = ft_calloc(argc, sizeof(char *));
		if (!array)
			return (NULL);
		while (i < argc - 1)
		{
			array[i] = ft_calloc(ft_strlen(argv[i + 1]) + 1, sizeof(char));
			if (!array[i])
				return (NULL);
			ft_strlcpy(array[i], argv[i + 1], ft_strlen(argv[i + 1]) + 1);
			i++;
			array[i] = NULL;
		}
	}
	return (array);
}

void	ft_set_min_max(t_stacks *stacks)
{
	int	i;

	i = 0;
	stacks->min = stacks->a[i];
	stacks->max = stacks->a[i];
	while ((size_t)i < stacks->size_a)
	{
		if (stacks->a[i] < stacks->min)
			stacks->min = stacks->a[i];
		if (stacks->a[i] > stacks->max)
			stacks->max = stacks->a[i];
		i++;
	}
}

void	ft_ps_initialize(int argc, char **argv, t_stacks *stacks)
{
	int		i;
	int		arrsize;
	char	**array;

	arrsize = 0;
	array = ft_set_array(argc, argv);
	while (array[arrsize])
		arrsize++;
	stacks->a = malloc(sizeof(int) * (arrsize + 1));
	stacks->b = malloc(sizeof(int) * (arrsize + 1));
	if (!stacks->a || !stacks->b)
		return ;
	i = 0;
	while (i < arrsize)
	{
		stacks->a[i] = (int)ft_char_to_long(array[i]);
		i++;
	}
	ft_freedoublearray(array);
	stacks->size_a = arrsize;
	stacks->size_b = 0;
	ft_set_min_max(stacks);
}
