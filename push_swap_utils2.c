/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:53:36 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 18:58:42 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_up_down(t_stck *stck, int *trgt)
{
	int	goal_a;
	int	goal_b;

	goal_a = stck->a[trgt[0]];
	goal_b = stck->b[trgt[1]];
	while (goal_a != stck->a[0])
	{
		if (trgt[0] > (int)stck->sze_a / 2)
			ft_rra(stck);
		if (trgt[0] <= (int)stck->sze_a / 2)
			ft_ra(stck);
	}
	while (goal_b != stck->b[0])
	{
		if (trgt[1] > (int)stck->sze_b / 2)
			ft_rrb(stck);
		if (trgt[1] <= (int)stck->sze_b / 2)
			ft_rb(stck);
	}
	ft_pb(stck);
}

void	ft_both_up(t_stck *stck, int *trgt)
{
	int	goal_a;
	int	goal_b;

	goal_a = stck->a[trgt[0]];
	goal_b = stck->b[trgt[1]];
	while (goal_a != stck->a[0] && goal_b != stck->b[0])
		ft_rr(stck);
	while (goal_a != stck->a[0])
		ft_ra(stck);
	while (goal_b != stck->b[0])
		ft_rb(stck);
	ft_pb(stck);
}
