/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:38:49 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 17:47:45 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_push_cost(int *targets, size_t size_a, size_t size_b, int *target)
{
	int	cost;
	int	new_cost;
	int	i;

	i = 0;
	cost = ft_cost_up_down(i, targets[i], size_a, size_b);
	cost = ft_newcost1(cost, target, i, targets);
	while (i++ < (int)size_a - 1)
	{
		new_cost = ft_cost_up_down(i, targets[i], size_a, size_b);
		if (new_cost < cost)
			cost = ft_newcost1(new_cost, target, i, targets);
		new_cost = ft_cost_both_up(i, targets[i]);
		if (new_cost < cost)
			cost = ft_newcost2(new_cost, target, i, targets);
		new_cost = ft_cost_both_down(i, targets[i], size_a, size_b);
		if (new_cost < cost)
			cost = ft_newcost3(new_cost, target, i, targets);
	}
	return (target);
}