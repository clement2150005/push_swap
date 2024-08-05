/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cost_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:40:31 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 17:47:43 by ccolin           ###   ########.fr       */
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
		while (a != 0)
		{
			a--;
			cost++;
		}
	if (b != 0)
		while (b != 0)
		{
			b--;
			cost++;
		}
	return (cost);
}

int	ft_cost_both_down(int a, int b, size_t size_a, size_t size_b)
{
	int	cost;

	cost = 0;
	while (a < (int)size_a + 1 && b < (int)size_b + 1)
	{
		a++;
		b++;
		cost++;
	}
	if (a != (int)size_a + 1)
		while (a != (int)size_a + 1)
		{
			a++;
			cost++;
		}
	if (b != (int)size_b + 1)
		while (b != (int)size_b + 1)
		{
			b++;
			cost++;
		}
	return (cost);
}

int	ft_cost_up_down(int a, int b, size_t size_a, size_t size_b)
{
	int	cost;

	cost = 0;
	if (a > ((int)size_a / 2))
		while (a < (int)size_a + 1)
		{
			a++;
			cost++;
		}
	if (a <= ((int)size_a / 2))
		while (a > 0)
		{
			a--;
			cost++;
		}
	if (b > ((int)size_b / 2))
		while (b < (int)size_b + 1)
		{
			b++;
			cost++;
		}
	if (b <= ((int)size_b / 2))
		while (b > 0)
		{
			b--;
			cost++;
		}
	return (cost);
}

int	ft_newcost1(int new_cost, int *target, int i, int *targets)
{
	target[0] = i;
	target[1] = targets[i];
	target[2] = 1;
	return (new_cost);
}
int	ft_newcost2(int new_cost, int *target, int i, int *targets)
{
	target[0] = i;
	target[1] = targets[i];
	target[2] = 2;
	return (new_cost);
}

int	ft_newcost3(int new_cost, int *target, int i, int *targets)
{
	target[0] = i;
	target[1] = targets[i];
	target[2] = 3;
	return (new_cost);
}