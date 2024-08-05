/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:23:52 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 18:55:37 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushsort_to_b(t_stck *stck)
{
	int	*trgt;
	int	*trgts;

	ft_startpush(stck);
	while (stck->sze_a > 3)
	{
		trgts = ft_find_trgts(stck->a, stck->b, stck->sze_a, stck->sze_b);
		trgt = ft_calloc(3, sizeof(int));
		if (!trgt)
			return ;
		trgt = ft_push_cost(trgts, stck->sze_a, stck->sze_b, trgt);
		if (trgt[2] == 1)
			ft_up_down(stck, trgt);
		if (trgt[2] == 2)
			ft_both_up(stck, trgt);
		if (trgt[2] == 3)
			ft_both_down(stck, trgt);
		free(trgts);
		free(trgt);
	}
}

void	ft_pushsort_to_a(t_stck *stck)
{
	int	*trgt;
	int	*trgts;

	while (stck->sze_b > 0)
	{
		trgts = ft_find_trgtsb(stck->b, stck->a, stck->sze_b, stck->sze_a);
		trgt = ft_calloc(3, sizeof(int));
		if (!trgt)
			return ;
		trgt = ft_push_cost(trgts, stck->sze_b, stck->sze_a, trgt);
		if (trgt[2] == 1)
			ft_up_downb(stck, trgt);
		if (trgt[2] == 2)
			ft_both_upb(stck, trgt);
		if (trgt[2] == 3)
			ft_both_downb(stck, trgt);
		free(trgts);
		free(trgt);
	}
}

void	ft_simple_sort_a(t_stck *stck)
{
	if (stck->a[0] > stck->a[1] && stck->a[0] > stck->a[2])
		ft_ra(stck);
	if (stck->a[1] > stck->a[0] && stck->a[1] > stck->a[2])
		ft_rra(stck);
	if (stck->a[0] > stck->a[1])
		ft_sa(stck);
}

void	ft_rotate_to_completion(t_stck *stck)
{
	int	min_position;

	min_position = 0;
	while (stck->min != stck->a[min_position])
		min_position++;
	while (stck->a[0] != stck->min)
	{
		if (min_position <= (int)stck->sze_a / 2)
			ft_ra(stck);
		if (min_position > (int)stck->sze_a / 2)
			ft_rra(stck);
	}
}

void	ft_push_swap(t_stck *stck)
{
	if (stck->sze_a == 1)
		return ;
	if (stck->sze_a == 2)
	{
		if (stck->a[0] > stck->a[1])
			ft_ra(stck);
		return ;
	}
	if (stck->sze_a == 3)
	{
		ft_simple_sort_a(stck);
		return ;
	}
	ft_pushsort_to_b(stck);
	ft_simple_sort_a(stck);
	ft_pushsort_to_a(stck);
	ft_rotate_to_completion(stck);
}
