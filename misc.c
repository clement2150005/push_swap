/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:53:36 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 17:47:32 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freedoublearray(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
}

void	ft_free_stacks(t_stacks *stacks)
{
	free(stacks->a);
	free(stacks->b);
	return ;
}

int	ft_is_sorted(int *array, int size)
{
	if (size <= 1)
		return (1);
	
	for (int i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
			return (0);
	}
	return (1);
}

