/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:23:52 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/26 09:18:08 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

void	print_stack(int *stack, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", stack[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	t_stacks stacks;
	int initial_a[] = {4, 3, 2, 1};
	int initial_b[] = {8, 7, 6, 5};
	int i;

	stacks.size_a = 4;
	stacks.size_b = 4;

	stacks.a = malloc(sizeof(int) * stacks.size_a);
	stacks.b = malloc(sizeof(int) * stacks.size_b);

	if (!stacks.a || !stacks.b)
		return (1);

	i = 0;
	while (i < (int)stacks.size_a)
	{
		stacks.a[i] = initial_a[i];
		i++;
	}

	i = 0;
	while (i < (int)stacks.size_b)
	{
		stacks.b[i] = initial_b[i];
		i++;
	}

	printf("Initial state:\n");
	printf("Stack A: ");
	print_stack(stacks.a, stacks.size_a);
	printf("Stack B: ");
	print_stack(stacks.b, stacks.size_b);

	sa(&stacks);
	printf("\nAfter sa:\n");
	printf("Stack A: ");
	print_stack(stacks.a, stacks.size_a);

	sb(&stacks);
	printf("\nAfter sb:\n");
	printf("Stack B: ");
	print_stack(stacks.b, stacks.size_b);

	ft_ss(&stacks);
	printf("\nAfter ss:\n");
	printf("Stack A: ");
	print_stack(stacks.a, stacks.size_a);
	printf("Stack B: ");
	print_stack(stacks.b, stacks.size_b);

	ft_pa(&stacks);
	printf("\nAfter pa:\n");
	printf("Stack A: ");
	print_stack(stacks.a, stacks.size_a);
	printf("Stack B: ");
	print_stack(stacks.b, stacks.size_b);

	ft_pb(&stacks);
	printf("\nAfter pb:\n");
	printf("Stack A: ");
	print_stack(stacks.a, stacks.size_a);
	printf("Stack B: ");
	print_stack(stacks.b, stacks.size_b);

	free(stacks.a);
	free(stacks.b);

	return (0);
}
