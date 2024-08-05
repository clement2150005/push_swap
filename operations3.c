/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 19:36:08 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 18:54:43 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stck *stck)
{
	ft_rrotate(stck->a, stck->sze_a);
	ft_printf("rra\n");
}

void	ft_rrb(t_stck *stck)
{
	ft_rrotate(stck->b, stck->sze_b);
	ft_printf("rrb\n");
}

void	ft_rrr(t_stck *stck)
{
	ft_rrotate(stck->a, stck->sze_a);
	ft_rrotate(stck->b, stck->sze_b);
	ft_printf("rrr\n");
}
