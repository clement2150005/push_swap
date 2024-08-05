/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:53:36 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 17:47:31 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_both_down(t_stacks *stacks, int *target)
{
	int goal_a;
	int	goal_b;

	goal_a = stacks->a[target[0]];
	goal_b = stacks->b[target[1]];
	while (goal_a != stacks->a[0] && goal_b != stacks->b[0])
		RRR
	while (goal_a != stacks->a[0])
		RRA
	while (goal_b != stacks->b[0])
		RRB
	PB
}

void	ft_up_downb(t_stacks *stacks, int *target)
{
	int goal_a;
	int	goal_b;

	goal_a = stacks->a[target[1]];
	goal_b = stacks->b[target[0]];
	while (goal_a != stacks->a[0])
	{
		if (target[1] > (int)stacks->size_a / 2)
			RRA
		if (target[1] <= (int)stacks->size_a / 2)
			RA
	}
		while (goal_b != stacks->b[0])
	{
		if (target[0] > (int)stacks->size_b / 2)
			RRB
		if (target[0] <= (int)stacks->size_b / 2)
			RB
	}
	PA
}

void	ft_both_upb(t_stacks *stacks, int *target)
{
	int goal_a;
	int	goal_b;

	goal_a = stacks->a[target[1]];
	goal_b = stacks->b[target[0]];
	while (goal_a != stacks->a[0] && goal_b != stacks->b[0])
		RR
	while (goal_a != stacks->a[0])
		RA
	while (goal_b != stacks->b[0])
		RB
	PA
}

void	ft_both_downb(t_stacks *stacks, int *target)
{
	int goal_a;
	int	goal_b;

	goal_a = stacks->a[target[1]];
	goal_b = stacks->b[target[0]];
	while (goal_a != stacks->a[0] && goal_b != stacks->a[0])
		RRR
	while (goal_a != stacks->a[0])
		RRA
	while (goal_b != stacks->b[0])
		RRB
	PA
}

void	ft_startpush(t_stacks *stacks)
{
	if (stacks->size_a == 4)
		PB
	else
		{
			PB
			PB
		}
}