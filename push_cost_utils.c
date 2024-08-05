/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cost_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:40:31 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 19:20:33 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_newcost1(int new_cost, int *trgt, int i, int *trgts)
{
	trgt[0] = i;
	trgt[1] = trgts[i];
	trgt[2] = 1;
	return (new_cost);
}

int	ft_newcost2(int new_cost, int *trgt, int i, int *trgts)
{
	trgt[0] = i;
	trgt[1] = trgts[i];
	trgt[2] = 2;
	return (new_cost);
}

int	ft_newcost3(int new_cost, int *trgt, int i, int *trgts)
{
	trgt[0] = i;
	trgt[1] = trgts[i];
	trgt[2] = 3;
	return (new_cost);
}

void	ft_costplus_indexminus(int *cost, int *index)
{
	(*cost)++;
	(*index)--;
}

void	ft_costplus_indexplus(int *cost, int *index)
{
	(*cost)++;
	(*index)++;
}
