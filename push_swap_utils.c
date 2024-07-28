/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:53:36 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/28 14:16:04 by ccolin           ###   ########.fr       */
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

// int	ft_is_sorted(int *array)
// {

// }

// int	ft_is_empty(int *array)
// {

// }

// int	ft_is_finished(t_stacks *stacks)
// {
// 	if (ft_is_sorted(stacks->a))
// 		return (1);
// 	if (ft_is_empty(stacks->b))
// 		return (1);
// 	return (0);
// }
