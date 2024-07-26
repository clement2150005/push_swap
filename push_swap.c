/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:23:52 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/26 20:11:27 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

void print_stack(int *stack, size_t size, char stack_name)
{
	printf("Stack %c: ", stack_name);
	for (size_t i = 0; i < size; i++)
		printf("%d ", stack[i]);
	printf("\n");
}

int main(void)
{
	t_stacks stacks;

	stacks.size_a = 5;
	stacks.size_b = 5;
	stacks.a = malloc(sizeof(int) * stacks.size_a);
	stacks.b = malloc(sizeof(int) * stacks.size_b);
	if (!stacks.a || !stacks.b)
		return (1);

	for (size_t i = 0; i < stacks.size_a; i++)
		stacks.a[i] = i + 1;
	for (size_t i = 0; i < stacks.size_b; i++)
		stacks.b[i] = i + 6;

	print_stack(stacks.a, stacks.size_a, 'A');
	print_stack(stacks.b, stacks.size_b, 'B');

	ft_sa(&stacks);
	print_stack(stacks.a, stacks.size_a, 'A');

	ft_sb(&stacks);
	print_stack(stacks.b, stacks.size_b, 'B');

	ft_ss(&stacks);
	print_stack(stacks.a, stacks.size_a, 'A');
	print_stack(stacks.b, stacks.size_b, 'B');

	ft_pa(&stacks);
	print_stack(stacks.a, stacks.size_a, 'A');
	print_stack(stacks.b, stacks.size_b, 'B');

	ft_pb(&stacks);
	print_stack(stacks.a, stacks.size_a, 'A');
	print_stack(stacks.b, stacks.size_b, 'B');

	ft_ra(&stacks);
	print_stack(stacks.a, stacks.size_a, 'A');

	ft_rb(&stacks);
	print_stack(stacks.b, stacks.size_b, 'B');

	ft_rr(&stacks);
	print_stack(stacks.a, stacks.size_a, 'A');
	print_stack(stacks.b, stacks.size_b, 'B');

	ft_rra(&stacks);
	print_stack(stacks.a, stacks.size_a, 'A');

	ft_rrb(&stacks);
	print_stack(stacks.b, stacks.size_b, 'B');

	ft_rrr(&stacks);
	print_stack(stacks.a, stacks.size_a, 'A');
	print_stack(stacks.b, stacks.size_b, 'B');

	free(stacks.a);
	free(stacks.b);
	return (0);
}