/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:14:34 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 17:47:36 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stacks *stacks)
{
	ft_swap(stacks-> a, stacks-> size_a);
	ft_printf("sa\n");
}

void	ft_sb(t_stacks *stacks)
{
	ft_swap(stacks-> b, stacks-> size_b);
	ft_printf("sb\n");
}

int	ft_ss(t_stacks *stacks)
{
	int	temp;

	if (stacks->size_a < 2 || stacks->size_b < 2)
		return (1);
	temp = stacks->a[0];
	stacks->a[0] = stacks->a[1];
	stacks->a[1] = temp;
	temp = stacks->b[0];
	stacks->b[0] = stacks->b[1];
	stacks->b[1] = temp;
	ft_printf("ss\n");
	return (0);
}

void	ft_pa(t_stacks *stacks)
{
	stacks->a = ft_push_top_element(stacks->b, stacks->a, stacks->size_a);
	stacks->b = ft_remove_first_element(stacks->b, stacks-> size_b);
	stacks->size_b--;
	stacks->size_a++;
	ft_printf("pa\n");
}

void	ft_pb(t_stacks *stacks)
{
	stacks->b = ft_push_top_element(stacks->a, stacks->b, stacks->size_b);
	stacks->a = ft_remove_first_element(stacks->a, stacks-> size_a);
	stacks->size_a--;
	stacks->size_b++;
	ft_printf("pb\n");
}
