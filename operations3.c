/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 19:36:08 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/26 20:02:44 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stacks *stacks)
{
	ft_rrotate(stacks->a, stacks->size_a);
	ft_printf("rra\n");
}

void	ft_rrb(t_stacks *stacks)
{
	ft_rrotate(stacks->b, stacks->size_b);
	ft_printf("rrb\n");
}

void	ft_rrr(t_stacks *stacks)
{
	ft_rrotate(stacks->a, stacks->size_a);
	ft_rrotate(stacks->b, stacks->size_b);
	ft_printf("rrr\n");
}
