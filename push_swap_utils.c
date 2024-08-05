/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:53:36 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 18:54:42 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_both_down(t_stck *stck, int *trgt)
{
	int	goal_a;
	int	goal_b;

	goal_a = stck->a[trgt[0]];
	goal_b = stck->b[trgt[1]];
	while (goal_a != stck->a[0] && goal_b != stck->b[0])
		ft_rrr(stck);
	while (goal_a != stck->a[0])
		ft_rra(stck);
	while (goal_b != stck->b[0])
		ft_rrb(stck);
	ft_pb(stck);
}

void	ft_up_downb(t_stck *stck, int *trgt)
{
	int	goal_a;
	int	goal_b;

	goal_a = stck->a[trgt[1]];
	goal_b = stck->b[trgt[0]];
	while (goal_a != stck->a[0])
	{
		if (trgt[1] > (int)stck->sze_a / 2)
			ft_rra(stck);
		if (trgt[1] <= (int)stck->sze_a / 2)
			ft_ra(stck);
	}
	while (goal_b != stck->b[0])
	{
		if (trgt[0] > (int)stck->sze_b / 2)
			ft_rrb(stck);
		if (trgt[0] <= (int)stck->sze_b / 2)
			ft_rb(stck);
	}
	ft_pa(stck);
}

void	ft_both_upb(t_stck *stck, int *trgt)
{
	int	goal_a;
	int	goal_b;

	goal_a = stck->a[trgt[1]];
	goal_b = stck->b[trgt[0]];
	while (goal_a != stck->a[0] && goal_b != stck->b[0])
		ft_rr(stck);
	while (goal_a != stck->a[0])
		ft_ra(stck);
	while (goal_b != stck->b[0])
		ft_rb(stck);
	ft_pa(stck);
}

void	ft_both_downb(t_stck *stck, int *trgt)
{
	int	goal_a;
	int	goal_b;

	goal_a = stck->a[trgt[1]];
	goal_b = stck->b[trgt[0]];
	while (goal_a != stck->a[0] && goal_b != stck->a[0])
		ft_rrr(stck);
	while (goal_a != stck->a[0])
		ft_rra(stck);
	while (goal_b != stck->b[0])
		ft_rrb(stck);
	ft_pa(stck);
}

void	ft_startpush(t_stck *stck)
{
	if (stck->sze_a == 4)
		ft_pb(stck);
	else
	{
		ft_pb(stck);
		ft_pb(stck);
	}
}
