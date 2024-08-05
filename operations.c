/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:14:34 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 18:54:43 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stck *stck)
{
	ft_swap(stck-> a, stck-> sze_a);
	ft_printf("sa\n");
}

void	ft_pa(t_stck *stck)
{
	stck->a = ft_push_top_element(stck->b, stck->a, stck->sze_a);
	stck->b = ft_remove_first_element(stck->b, stck-> sze_b);
	stck->sze_b--;
	stck->sze_a++;
	ft_printf("pa\n");
}

void	ft_pb(t_stck *stck)
{
	stck->b = ft_push_top_element(stck->a, stck->b, stck->sze_b);
	stck->a = ft_remove_first_element(stck->a, stck-> sze_a);
	stck->sze_a--;
	stck->sze_b++;
	ft_printf("pb\n");
}
