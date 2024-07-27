/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:23:52 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/27 15:27:03 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

void print_stacks(const t_stacks *stacks)
{
    printf("Stack A (size: %zu): ", stacks->size_a);
    for (size_t i = 0; i < stacks->size_a; i++)
    {
        printf("%d ", stacks->a[i]);
    }
    printf("\n");

    printf("Stack B (size: %zu): ", stacks->size_b);
    for (size_t i = 0; i < stacks->size_b; i++)
    {
        printf("%d ", stacks->b[i]);
    }
    printf("\n");

    printf("Min value: %d\n", stacks->min);
    printf("Max value: %d\n", stacks->max);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (ft_error_check(argc, argv))
		return (1);
	ft_ps_initialize(argc, argv, &stacks);
	print_stacks(&stacks);
	ft_free_stacks(&stacks);
	return (0);
}
