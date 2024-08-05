/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 19:36:08 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 18:54:43 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stck *stck)
{
	ft_rotate(stck->a, stck->sze_a);
	ft_printf("ra\n");
}

void	ft_rb(t_stck *stck)
{
	ft_rotate(stck->b, stck->sze_b);
	ft_printf("rb\n");
}

void	ft_rr(t_stck *stck)
{
	ft_rotate(stck->a, stck->sze_a);
	ft_rotate(stck->b, stck->sze_b);
	ft_printf("rr\n");
}
