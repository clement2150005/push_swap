/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:53:36 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/01 11:12:54 by ccolin           ###   ########.fr       */
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

// int	ft_is_sorted(int *array, int size)
// {
// 	int	smallest_yet;

// 	if (size <= 1)
// 		return (1);
// 	size--;
// 	smallest_yet = array[size--];
// 	while (size > 0)
// 	{
// 		if (smallest_yet < array[--size])
// 			return (0);
// 		smallest_yet = array[size];
// 	}
// 	return (1);
// }

// int	ft_is_empty(int *array)
// {
// 	if (!array[0])
// 		return (1);
// 	return (0);
// }

// int	ft_is_finished(t_stacks *stacks)
// {
// 	if (!ft_is_sorted(stacks->a, stacks->size_a))
// 		return (0);
// 	if (!ft_is_empty(stacks->b))
// 		return (0);
// 	return (1);
// }
