/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:23:52 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 17:47:45 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushsort_to_b(t_stacks *stacks)
{
	int	*target;
	int	*targets;

	ft_startpush(stacks);
	while (stacks->size_a > 3)
	{
		targets = ft_find_targets(stacks->a, stacks->b, stacks->size_a, stacks->size_b);
		target = ft_calloc(3, sizeof(int));
		if (!target)
			return ;
		target = ft_push_cost(targets, stacks->size_a, stacks->size_b, target);
		if (target[2] == 1)
			ft_up_down(stacks, target);
		if (target[2] == 2)
			ft_both_up(stacks, target);
		if (target[2] == 3)
			ft_both_down(stacks, target);
		free(targets);
		free(target);
	}
}

void	ft_pushsort_to_a(t_stacks *stacks)
{
	int	*target;
	int	*targets;

	while (stacks->size_b > 0)
	{
		targets = ft_find_targetsb(stacks->b, stacks->a, stacks->size_b, stacks->size_a);
		target = ft_calloc(3, sizeof(int));
		if (!target)
			return ;
		target = ft_push_cost(targets, stacks->size_b, stacks->size_a, target);
		if (target[2] == 1)
			ft_up_downb(stacks, target);
		if (target[2] == 2)
			ft_both_upb(stacks, target);
		if (target[2] == 3)
			ft_both_downb(stacks, target);
		free(targets);
		free(target);
	}
}

void	ft_simple_sort_a(t_stacks *stacks)
{
	if (stacks->a[0] > stacks->a[1] && stacks->a[0] > stacks->a[2])
		RA
	if (stacks->a[1] > stacks->a[0] && stacks->a[1] > stacks->a[2])
		RRA
	if (stacks->a[0] > stacks->a[1])
		SA
}

void	ft_rotate_to_completion(t_stacks *stacks)
{
	int	min_position;

	min_position = 0;
	while (stacks->min != stacks->a[min_position])
		min_position++;
	while (stacks->a[0] != stacks->min)
	{
		if (min_position <= (int)stacks->size_a / 2)
			RA
		if (min_position > (int)stacks->size_a / 2)
			RRA
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
	if (stacks->size_a == 3)
	{
		ft_simple_sort_a(stacks);
		return ;
	}
	ft_pushsort_to_b(stacks);
	ft_simple_sort_a(stacks);
	ft_pushsort_to_a(stacks);
	ft_rotate_to_completion(stacks);
}
