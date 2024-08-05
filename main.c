/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:23:52 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 18:54:43 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stck	stck;

	if (!ft_error_check(argc, argv))
		return (1);
	ft_ps_initialize(argc, argv, &stck);
	if (!ft_is_sorted(stck.a, stck.sze_a))
		ft_push_swap(&stck);
	ft_free_stck(&stck);
	return (0);
}
