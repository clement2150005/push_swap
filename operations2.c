/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 19:36:08 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 17:47:38 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stacks *stacks)
{
	ft_rotate(stacks->a, stacks->size_a);
	ft_printf("ra\n");
}

void	ft_rb(t_stacks *stacks)
{
	ft_rotate(stacks->b, stacks->size_b);
	ft_printf("rb\n");
}

void	ft_rr(t_stacks *stacks)
{
	ft_rotate(stacks->a, stacks->size_a);
	ft_rotate(stacks->b, stacks->size_b);
	ft_printf("rr\n");
}
