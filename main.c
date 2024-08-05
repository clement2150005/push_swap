/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:23:52 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 16:16:22 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_stacks *stacks)
{
	size_t	i;

	printf("Stack A (size: %zu): ", stacks->size_a);
	i = 0;
	while (i < stacks->size_a)
	{
		printf("%d ", stacks->a[i]);
		i++;
	}
	printf("\n");
	printf("Stack B (size: %zu): ", stacks->size_b);
	i = 0;
	while (i < stacks->size_b)
	{
		printf("%d ", stacks->b[i]);
		i++;
	}
	printf("\n");
	printf("Min value: %d\n", stacks->min);
	printf("Max value: %d\n", stacks->max);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (!ft_error_check(argc, argv))
		return (1);
	ft_ps_initialize(argc, argv, &stacks);
	if (!ft_is_sorted(stacks.a, stacks.size_a))
		ft_push_swap(&stacks);
	// print_stacks(&stacks);
	ft_free_stacks(&stacks);
	return (0);
}
