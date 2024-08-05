/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:38:49 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 19:25:59 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cost_both_up(int a, int b)
{
	int	cost;

	cost = 0;
	while (a > 0 && b > 0)
	{
		a--;
		b--;
		cost++;
	}
	if (a != 0)
	{
		while (a != 0)
			ft_costplus_indexminus(&cost, &a);
	}
	if (b != 0)
		while (b != 0)
			ft_costplus_indexminus(&cost, &b);
	return (cost);
}

int	ft_cost_both_down(int a, int b, size_t sze_a, size_t sze_b)
{
	int	cost;

	cost = 0;
	while (a < (int)sze_a + 1 && b < (int)sze_b + 1)
	{
		a++;
		b++;
		cost++;
	}
	if (a != (int)sze_a + 1)
		while (a != (int)sze_a + 1)
			ft_costplus_indexplus(&cost, &a);
	if (b != (int)sze_b + 1)
	{
		while (b != (int)sze_b + 1)
		{
			b++;
			cost++;
		}
	}
	return (cost);
}

int	ft_cost_up_down(int a, int b, size_t sze_a, size_t sze_b)
{
	int	cost;

	cost = 0;
	if (a > ((int)sze_a / 2))
		while (a < (int)sze_a + 1)
			ft_costplus_indexplus(&cost, &a);
	if (a <= ((int)sze_a / 2))
		while (a > 0)
			ft_costplus_indexminus(&cost, &a);
	if (b > ((int)sze_b / 2))
	{
		while (b < (int)sze_b + 1)
		{
			b++;
			cost++;
		}
	}
	if (b <= ((int)sze_b / 2))
		while (b > 0)
			ft_costplus_indexminus(&cost, &b);
	return (cost);
}

int	*ft_push_cost(int *trgts, size_t sze_a, size_t sze_b, int *trgt)
{
	int	cost;
	int	new_cost;
	int	i;

	i = 0;
	cost = ft_cost_up_down(i, trgts[i], sze_a, sze_b);
	cost = ft_newcost1(cost, trgt, i, trgts);
	while (i++ < (int)sze_a - 1)
	{
		new_cost = ft_cost_up_down(i, trgts[i], sze_a, sze_b);
		if (new_cost < cost)
			cost = ft_newcost1(new_cost, trgt, i, trgts);
		new_cost = ft_cost_both_up(i, trgts[i]);
		if (new_cost < cost)
			cost = ft_newcost2(new_cost, trgt, i, trgts);
		new_cost = ft_cost_both_down(i, trgts[i], sze_a, sze_b);
		if (new_cost < cost)
			cost = ft_newcost3(new_cost, trgt, i, trgts);
	}
	return (trgt);
}
