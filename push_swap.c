/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:23:52 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/01 12:24:47 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_pushsort_to_b(t_stacks *stacks)
// {

// }

// void	ft_pushsort_to_a(t_stacks *stacks)
// {

// }

void	ft_simple_sort(t_stacks *stacks)
{
	if (stacks->a[0] < stacks->a[1] && stacks->a[1] < stacks->a[2])
		return ;
	if (stacks->a[0] < stacks->a[1] && stacks->a[1] > stacks->a[2])
	{
		RRA
		SA
	}
	if (stacks->a[0] > stacks->a[1] && stacks->a[0] > stacks->a[2])
		RA
	if (stacks->a[0] > stacks->a[1] && stacks->a[1] > stacks->a[2])
	{
		SA
		RRA
	}
	if (stacks->a[0] > stacks->a[1] && stacks->a[1] < stacks->a[2])
		SA
	if ((stacks->a[0] < stacks->a[1] && stacks->a[1] > stacks->a[2])\
	 && stacks->size_a > 2)
		RRA
}

void	ft_rotate_to_completion(t_stacks *stacks)
{
	int	min_position;

	min_position = 0;
	while (stacks->min != stacks->a[min_position])
		min_position++;
	while (stacks->a[0] != stacks->min)
	{
		if (min_position < (int)stacks->size_a / 2)
			RA
		if (min_position > (int)stacks->size_a / 2)
			RRA
		else
			RA
	}
}

void	ft_push_swap(t_stacks *stacks)
{
	if (stacks->size_a == 1)
		return ;
	if (stacks->size_a == 2)
	{
		if (stacks->a[0] > stacks->a[1])
			RA
		return ;
	}
	// while (stacks-> size_a > 3)
	// 	ft_pushsort_to_b(&stacks);
	// ft_simple_sort(stacks);
	// while (stacks->size_b > 0)
	// 	ft_pushsort_to_a(&stacks);
	ft_rotate_to_completion(stacks);
}